
#include <iostream>
#include <fstream>
#include <vector>

std::vector<unsigned char> read_binary_file(const std::string filename)
{
    // binary mode is only for switching off newline translation
    std::ifstream imagefile(filename, std::ios::binary);
    // Check if the file has been opened successfully.
    if (!imagefile.is_open())
    {
        // The file hasn't been opened; take appropriate actions here.
        throw std::runtime_error(std::string("Open input file failed: ") + filename);
    }

    imagefile.unsetf(std::ios::skipws);
    std::streampos file_size;
    imagefile.seekg(0, std::ios::end);
    file_size = imagefile.tellg();
    imagefile.seekg(0, std::ios::beg);

    std::vector<unsigned char> vec;
    vec.reserve(file_size);
    vec.insert(vec.begin(),
               std::istream_iterator<unsigned char>(imagefile),
               std::istream_iterator<unsigned char>());
    return (vec);
}

void write_binary_file(const std::string filename, const std::vector<unsigned char> filebytes)
{
    std::ofstream output_file(filename, std::ios::out | std::ios::binary);
    if (!output_file)
    {
        // The file hasn't been opened; take appropriate actions here.
        throw std::runtime_error(std::string("Open output file failed: ") + filename);
    }

    std::copy(filebytes.cbegin(), filebytes.cend(),
              std::ostream_iterator<unsigned char>(output_file));
}

int main()
{
    try
    {
        auto vec = read_binary_file("test.png");
        write_binary_file("test1.png", vec);
        // auto src = (char*) new char[vec.size()];
        // std::copy(vec.begin(), vec.end(), src);
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    return 0;
}