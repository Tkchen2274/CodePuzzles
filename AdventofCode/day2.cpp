
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

int main() {
	std::ifstream inFile; 
	inFile.open("day2_part1.txt");

	std::string line; 
	std::stringstream ss;
	int found;
	std::string temp;

	std::vector<int> numbers;

	while (std::getline(inFile, line))
	{
		ss << line; 
		while(!ss.eof()){
			// why do i first place it into a string stream
			// then put it back into a string
			ss >> temp;

			if(std::stringstream(temp) >> found)
			{
				// std::cout << found << " ";
				numbers.push_back(found);
				std::cout << numbers.size() << std::endl;
			}

		}
		// need to clear the stringstream buffer
		ss.str("");
		ss.clear();
		numbers.clear();
		// std::cout << line << std::endl;	
	}
}

		
