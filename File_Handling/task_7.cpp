#include <iostream>   // Including the input/output stream library
#include <fstream>    // Including the file stream library
#include <string>     // Including the string handling library
using namespace std;
// Function to display the content of a file
void displayFileContent(const string & filename) {
  ifstream file(filename); // Open file with given filename for reading
  string line; // Declare a string to store each line of text

  if (file.is_open()) { // Check if the file was successfully opened
    cout << "File content:" << endl; // Displaying a message indicating file content
    while (getline(file, line)) { // Read each line from the file
      cout << line << endl; // Display each line of the file
    }
    file.close(); // Close the file
  } else {
    cout << "Failed to open the file." << endl; // Display an error message if file opening failed
  }
}

int main() {
  displayFileContent("new_test.txt"); // Display content of "new_test.txt" before any modification
  cout << endl;

  ofstream outputFile; // Declare an output file stream object
  // Open the file in append mode
  outputFile.open("new_test.txt", ios::app); // Open "new_test.txt" in append mode

  displayFileContent("new_test.txt"); // Display content of "new_test.txt" after opening in append mode
  cout << endl;

  if (outputFile.is_open()) { // Check if the file was successfully opened
    string newData; // Declare a string to store new data entered by the user

    cout << "Enter the data to append: "; // Prompt the user to enter data
    // Read the new data from the user
    getline(cin, newData); // Get user input for new data

    // Append the new data to the file
    outputFile << newData << endl; // Write the new data to the file
    outputFile.close(); // Close the file

    cout << "Data appended successfully." << endl; // Display a success message
    displayFileContent("new_test.txt"); // Display content of "new_test.txt" after appending data
    cout << endl;
  } else {
    cout << "Failed to open the file." << endl; // Display an error message if file opening failed
  }

  return 0; // Return 0 to indicate successful execution
}
