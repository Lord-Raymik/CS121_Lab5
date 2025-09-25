# Algorithm Documentation for FileIO

### Necessary Variables
ifstream inFile
stringstream converter
sting item
int number
string text

### Algorithm for Main()
open data.csv with inFile
while keepGoing
    clean out converter
    if (inFile.eof() == true)
        keepGoing = false
    else
        getLine(inFile, item, ",")
        use converter to turn the current token into an int
        add the new int to number
        do the same thing for the second token
        getLine(inFile, item, ",")
        assign the new string token to text
        print out text to the console number times with an end line character at the end
        set number to 0
close inFile
