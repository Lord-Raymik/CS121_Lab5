#include <iostream>
#include <sstream>
#include <fstream>


int main() {
	//the variables used in main()
	std::ifstream inFile;
	std::stringstream converter;
	std::stringstream ss;
	std::string currentLine;
	std::string text;
	std::string sCount;
	int count1;
	int count2;
	int countSum;

	//the main algorithm
	inFile.open("data.csv"); //open data.csv
	bool keepGoing = true;
	while (keepGoing) {
		//cleaning out the converter
		converter.clear();
		converter.str("");
		if (inFile.eof() == true) {
			keepGoing = false;
		} else {
			keepGoing = false;
			getline(inFile, currentLine);
			ss.str(currentLine);

			getline(ss, sCount, ',');
			converter.str(sCount);
			converter >> count1;
			getline(ss, sCount, ',');
			converter.str(sCount);
			converter >> count2;
			std::cout << count2 << std::endl;

			getline(ss, text);
			countSum = count1 + count2;
			for (int i = 0; i < countSum; i++) {
				std::cout << text;
			}
			std::cout << std::endl;
		} //end if
	} //end while loop
	inFile.close(); //close data.csv
	return 0;
} //end main
