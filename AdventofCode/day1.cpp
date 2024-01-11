
// strategy 
// you want to parse the data so that you can extract the first and last number of the string
// maybe you should like iterate from the front and iterate from the back
// then concatenate them 
// then cast them into a int and store them into a value
// 1abc2
// pqr3stu8vwx
// a1b2c3d4e5f
// treb7uchet
// In this example, the calibration values of these four lines are 12, 38, 15, and 77. Adding these together produces 142.
//
// try binary search to check? 
// too slow to go through entire list? 


#include <iostream>
#include <sstream>
#include <string>

int first_and_last_int(std::string input){
	
	std::stringstream test;
	std::string front = "0";
	std::string back = "0";
	std::string temp = "";	

	for(int i = 0; i < input.size(); i++) {
	  if(std::isdigit(input[i])) {
	    temp += input[i];
	  }
	}
	// std::cout << temp << std::endl;
	
	if(temp.size() == 0) {
	}
	else if(temp.size() == 1) {
	  front = temp[0];
	  back = front; 
	}
	else {
	  front = temp[0];
	  back = temp[temp.size() - 1];
	}
	

	return stoi(front + back);	
}
int main() {
	std::ifstream inFile; 
	inFile.open(day1.txt);

	std::string line; 

	while (std::getline(
	std::cout << "hi" << std::endl;
	std::string test = "1a45";
	int j =first_and_last_int(test);
	std::cout << j << std::endl;
	// std::cout << std::isdigit('i') << std::endl;
}

		
