#include <iostream>  // Include the input/output stream library

#include <fstream>   // Include the file stream library
using namespace std;
int main() {
  // Create a new file named "test.txt"
  ofstream outputFile("test.txt");  // Open/create a file named "test.txt" for writing

  if (outputFile.is_open()) {  // Check if the file was successfully opened
    // Write some text into the file
    outputFile << "C++ is a high level language. \n";  // Write a line of text to the file
    outputFile << "Computer is an electronic Machine. \n";  // Write a line of text to the file
    outputFile << "C++ is machine language.\n";  // Write a line of text to the file
    outputFile << "Honesty is best policy.\n";  // Write a line of text to the file
    outputFile << "Pride has a fall.";  // Write a line of text to the file

    // Close the file
    outputFile.close();  // Close the file after writing

    cout << "Text has been written to the file." << endl;  // Display a success message
  } else {
    cout << "Failed to create the file." << endl;  // Display an error message if file creation failed
  }

  return 0;  // Return 0 to indicate successful execution
}
