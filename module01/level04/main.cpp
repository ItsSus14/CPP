#include <iostream>
#include "replace.hpp"
#include "fileUtils.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::string content;

    if (!readFile(filename, content))
    {
        std::cerr << "Error: cannot read input file." << std::endl;
        return (1);
    }

    std::string result = replace(content, s1, s2);

    std::string outputName = filename + ".replace";

    if (!writeFile(outputName, result))
    {
        std::cerr << "Error: cannot write output file." << std::endl;
        return (1);
    }

    return (0);
}
