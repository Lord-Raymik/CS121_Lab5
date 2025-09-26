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
	inFile.open("data.csv");
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
			std::cout << "sCount 1: " << sCount << std::endl;
			converter.str(sCount);
			converter >> count1;
			getline(ss, sCount, ',');
			std::cout << "sCount 2: " << sCount << std::endl;
			converter.str(sCount);
			converter >> count2;

			getline(ss, text);
			countSum = count1 + count2;
			std::cout << "c1: " << count1 << ", c2: " << count2 << ", cs: " << countSum << std::endl;
			for (int i = 0; i < countSum; i++) {
				std::cout << text;
			}
			std::cout << std::endl;
		} //end if
	} //end while loop
	inFile.close();
	return 0;
} //end main
