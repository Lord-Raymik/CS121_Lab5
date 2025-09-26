r# Algorithm Documentation for FileIO

### Necessary Variables
ifstream inFile
stringstream converter
stringstream ss
string currentLine
string text
string sCount
int count1
int count2

### Algorithm for Main()
open data.csv with inFile
while keepGoing
    clean out converter
    if (inFile.eof() == true)
        keepGoing = false
    else
        getline(inFile, currentLine)
        pass currentLine into ss
        getline(ss, sNumber, ",")
        put sNumber into converter
        pass the int in converter into count1
        repeat the process form the last getline, only put the int into count2 instead
        getline(ss, text)
        print text to the console a number of times equal to the sum of count1 and count2
close inFile
return 0

### BTW EVERYTHING IS NOT WORKING AT THE MOMENT POSSIBLY DUE TO WHITESPACE BEFORE THE SECOND INT, WILL NEED FIXING BEFORE ANYTHIGN ELSE IS DONE
