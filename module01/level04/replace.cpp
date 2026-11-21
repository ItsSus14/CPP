#include <string>

std::string	replace(std::string line, std::string s1, std::string s2)
{
	if(s1.empty() || s2.empty())
		return line;
	std::string result = "";
	std::string::size_type pos = line.find(s1);
	if(pos == std::string::npos)
		return line;
	std::string::size_type lineLen = line.length();
	std::string::size_type strLen = s1.length();
	std::string::size_type i = 0;
	while(pos != std::string::npos)
	{
		result += line.substr(i, pos-i);
		result += s2;
		i = pos + strLen;
		pos = line.find(s1, i);
	}
	if (i < lineLen)
		result += line.substr(i, lineLen - i);
	
	return result;
}
