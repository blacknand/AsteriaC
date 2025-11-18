#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char** argv) 
{
	if (argc < 4) {
			std::cout << "Usage: ./astc <input>.c -o <input>.out" << std::endl;
   		return -1;
	}

	std::ifstream file(argv[1]);
	
	if (!file.is_open()) {
			std::cerr << "Error opening file." << std::endl;
			return -1;
	}
	
	std::string line;
	while (std::getline(file, line))
	file.close();

	std::cout << "AsteriaC not implemented yet..." << std::endl;
	return 0;
}
