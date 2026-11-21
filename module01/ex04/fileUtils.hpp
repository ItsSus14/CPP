#ifndef FILEUTILS_HPP
#define FILEUTILS_HPP

#include <string>

bool readFile(const std::string& filename, std::string& content);
bool writeFile(const std::string& filename, const std::string& content);

#endif
