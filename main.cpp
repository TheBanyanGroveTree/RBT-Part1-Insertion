/**
   Description: RBT
   Author: Aahana Sapra
   Date: 04/26/2026
 */

#include <iostream>
#include <string>
#include "Node.h"


using namespace std;


// Define function prototypes
void stringUpper(string& input);

// add()
// read()
// print()

int main() {
  // Define RBT root Node
  Node* root = nullptr;

  string userCommand = ""; // Declare str for user input

  // Continue prompting user for input until QUIT command
  bool newInput = true;
  while (newInput) {
    // Read in user input
    cout << "Enter a command (ADD, READ, PRINT, QUIT): ";
    getline(cin, userCommand);

    stringUpper(userCommand); // Convert input to uppercase for comparison

    // Validate input and call appropriate method or exit program
    if (userCommand == "ADD") {
      
    } else if (userCommand == "READ") {

    } else if (userCommand == "PRINT") {
      
    } else if (userCommand == "QUIT") {
      newInput = false; // Change input status
      
    } else { // Invalid input
      cout << "Please input ADD, READ, PRINT, or QUIT." << endl;
    }
  }
  
  return 0;
}

// Convert string to uppercase
void stringUpper(string& input) {
  for (int i = 0; i < input.size(); i++) {
      input[i] = toupper(input[i]);
    }
}
