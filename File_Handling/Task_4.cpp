#include <iostream>     // Including the input/output stream library
#include <fstream>      // Including the file stream library
#include <string>       // Including the string handling library
#include <sstream>      // Including the stringstream library
using namespace std;
int main() {
  ifstream inputFile("test.txt"); // Open the text file named "test.txt" for reading

  if (inputFile.is_open()) {  // Checking if the file was successfully opened
    string line;         // Declaring a string variable to store each line of text
    int wordCount = 0;        // Initializing a variable to count words

    while (getline(inputFile, line)) {  // Loop through each line in the file
      stringstream ss(line);  // Create a stringstream object with the current line content
      string word;  // Declare a string variable to store each word

      while (ss >> word) {  // Extract words from the stringstream
        wordCount++;  // Increment word count for each word extracted
      }
    }

    inputFile.close();  // Closing the file after counting words

    cout << "Number of words in the said file: " << wordCount << endl;  // Outputting the total word count
  } else {
    cout << "Failed to open the file." << endl;  // Display an error message if file opening failed
  }

  return 0;  // Return 0 to indicate successful execution
}
