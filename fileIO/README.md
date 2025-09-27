# Algorithm Documentation for FileIO

### Necessary Variables
ifstream inFile
stringstream converter
string currentLine
string text
string sNum1
string sNum2
int num1
int num2
int sum

### Algorithm for Main()
open data.csv through inFile
while getline(inFile, currentLine)
    clear out the converter
    set converter's string to currentLine
    access converter via getline to grab and assign values to sNum1, sNum2, and text respectively
    clear out the converter
    pass both tokens for sNum1 and sNum2 into converter
    use converter to turn both these tokens into ints before assigning them to num1 and num2 respectively
    set sum to equal the addition of both num1 and num2
    for sum times
        print text to the console
    print a final endline character to the console
close inFile
return 0
