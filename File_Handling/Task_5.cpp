#include <iostream>   // Including the input/output stream library
#include <fstream>    // Including the file stream library
#include <string>     // Including the string handling library
using namespace std;
int main() {
  // Open the input file
  ifstream inputFile("test.txt");    // Opening the file named "test.txt" for reading
  // Create or overwrite the output file
  ofstream outputFile("test_copy.txt");  // Creating/overwriting the file named "test_copy.txt" for writing

  if (inputFile.is_open() && outputFile.is_open()) {  // Checking if both input and output files were successfully opened
    string line;  // Declaring a string variable to store each line of text

    while (getline(inputFile, line)) {  // Loop through each line in the input file
      // Write each line to the output file
      outputFile << line << "\n";  // Writing each line to the output file with a newline character
    }

    inputFile.close();   // Closing the input file after copying
    outputFile.close();  // Closing the output file after copying

    cout << "File copied successfully." << endl;  // Displaying success message
  } else {
    cout << "Failed to open the files." << endl;  // Display an error message if file opening failed
  }

  return 0;  // Return 0 to indicate successful execution
}
