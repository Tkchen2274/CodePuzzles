
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <sstream>

int main() {
	std::ifstream inFile; 
	inFile.open("day2_part1.txt");

	std::string line; 
	std::stringstream ss;
	int found;
	std::string temp;

	while (std::getline(inFile, line))
	{
		ss << line; 
		while(!ss.eof()){
			// why do i first place it into a string stream
			// then put it back into a string
			ss >> temp;

			if(std::stringstream(temp) >> found)
			{
				std::cout << found << " ";
			}

		}
		ss.str("");
		ss.clear();
		// std::cout << line << std::endl;	
	}
}

		
