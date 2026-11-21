#include <iostream>
#include <cctype>
int	main(int argc, char **argv){
	if(argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
		return (0);
	}
	int i;
	int x;
	i = 1;
	while(i < argc){
		x = 0;
		while (argv[i][x]){
			std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(argv[i][x])));
			x++;
		}
		i++;
	}
	std::cout << '\n';
	return (0);
}
