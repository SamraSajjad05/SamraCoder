#include <iostream>   // Including the input/output stream library

#include <fstream>    // Including the file stream library

#include <string>     // Including the string handling library
using namespace std;
int main() {
  // Open the text file
  ifstream inputFile ("test.txt");  // Opening the file named "test.txt" for reading

  if (inputFile.is_open()) {  // Checking if the file was successfully opened
    string line;  // Declaring a string variable to store each line of text
    int lineCount = 0;  // Initializing a variable to count lines

    while (getline(inputFile, line)) {  // Loop through each line in the file
      lineCount++;  // Incrementing line count for each line read
    }

    inputFile.close();  // Closing the file after counting lines

    cout << "Number of lines in the file: " << lineCount << endl;  // Outputting the total line count
  } else {
    cout << "Failed to open the file." << endl;  // Display an error message if file opening failed
  }

  return 0;  // Return 0 to indicate successful execution
}
