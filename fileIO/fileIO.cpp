#include <iostream>
#include <sstream>
#include <fstream>


int main() {
	//the variables used in main()
	std::ifstream inFile;
	std::stringstream converter;
	std::string currentLine;
	std::string text;
	std::string sNum1;
	std::string sNum2;
	int num1;
	int num2;
	int sum;

	//the main algorithm
	inFile.open("data.csv"); //open data.csv
	while (getline(inFile, currentLine)) {
		//cleaning out the converter just in case
		converter.clear();
		converter.str("");

		converter.str(currentLine);

		getline(converter, sNum1, ',');
		getline(converter, sNum2, ',');
		getline(converter, text);

		converter.clear();
		converter.str("");
		converter << sNum1 << " " << sNum2;
		converter >> num1 >> num2;
		sum = num1 + num2;

		for (int i = 0; i < sum; i++) {
			std::cout << text;
		}
		std::cout << std::endl;
	} //end while loop
	inFile.close(); //close data.csv
	return 0;
} //end main
