#include <iostream>   // Including the input/output stream library

#include <fstream>    // Including the file stream library

#include <string>     // Including the string handling library
using namespace std;
int main() {
  // Open an existing file named "test.txt"
  ifstream inputFile("test.txt");  // Opening the file named "test.txt" for reading

  if (inputFile.is_open()) {  // Checking if the file was successfully opened
    string line;  // Declaring a string variable to store each line of text

    while (getline(inputFile, line)) {  // Loop through each line in the file
      // Display each line on the console
      cout << line << endl;  // Output the content of 'line' to the console
    }

    inputFile.close();  // Closing the file after reading
  } else {
    cout << "Failed to open the file." << endl;  // Display an error message if file opening failed
  }

  return 0;  // Return 0 to indicate successful execution
}
