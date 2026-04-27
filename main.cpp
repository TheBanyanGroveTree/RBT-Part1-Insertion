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

void leftRotate(Node* x, Node* NIL, Node*& root);
void rightRotate(Node* x, Node* NIL, Node*& root);

// read()
// print()


int main() {
  // Initialize NIL (sentinel Node for leaves)
  Node* NIL = new Node(0);
  NIL->setIsRed(false);
  NIL->setLeft(NIL);
  NIL->setRight(NIL);

  Node* root = NIL; // Initialize RBT root Node

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


// Implement left rotation (promote root successor)
void leftRotate(Node* x, Node* NIL, Node*& root) {
  Node* y = x->getRight(); // Node to be promoted

  // 1. HANDOVER: detach subtree (NEW x right subtree = OLD y left subtree)
  x->setRight() = y->getLeft();
  if (y->getLeft() != NIL) {
    y->getLeft()->setParent() = x;
  }

  // 2. PARENT LINK: connect y to tree
  y->setParent() = x->getParent(); // NEW y parent = OLD x parent
  
  // Connect NEW x parent to y
  if (x->getParent() == nullptr) { // x = ROOT
    root = y;
  } else if (x == x->getParent->getLeft()) { // x = LEFT child
    x->getParent->setLeft() = y;
  } else { // x = RIGHT child
    x->getParent->setRight = y;
  }

  // 3. PIVOT: finalize x-y PARENT-CHILD link
  y->setLeft() = x; 
  x->setParent = y;
}


// Implement right rotation (promote root predecessor)
void rightRotate(Node* x, Node* NIL, Node*& root) {
  Node* y = x->getLeft(); // Node to be promoted

  // 1. HANDOVER: detach subtree (NEW x left subtree = OLD y right subtree)
  x->setLeft() = y->getRight();
  if (y->getRight != NIL) {
    y->getRight->setParent() = x;
  }

  // 2. PARENT LINK: connect y to tree
  y->setParent = x->getParent();

  // Connect NEW x parent to y
  if (x->getParent() == nullptr) { // x = ROOT
    root = y;
  } else if (x == x->getParent->getLeft()) { // x = LEFT child
    x->getParent->setLeft() = y;
  } else { // x = RIGHT child
    x->getParent->setRight = y;
  }

  // 3. PIVOT: finalize x-y PARENT-CHILD link
  y->setRight() = x;
  x->setParent() = y;
}

