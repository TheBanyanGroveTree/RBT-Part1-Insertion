#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

// Constructor
Node::Node(int value) {
  this->value = value;
  isRed = true;
  left = nullptr;
  right = nullptr;
  parent = nullptr;
}

// Set value
void Node::setValue(int value) {
  this->value = value;
}

// Get value
int Node::getValue() {
  return value;
}

// Set color
void Node::setIsRed(bool isRed) {
  this->isRed = isRed;
}

// Get color
bool Node::getIsRed() {
  return isRed;
}

// Set left Node ptr
void Node::setLeft(Node* left) {
  this->left = left;
}

// Get left Node ptr
Node* Node::getLeft() {
  return left;
}

// Set right Node ptr
void Node::setRight(Node* right) {
  this->right = right;
}

// Get right Node ptr
Node* Node::getRight() {
  return right;
}

// Set parentNode ptr
void Node::setParent(Node* parent) {
  this->parent = parent;
}

// Get parent Node ptr
Node* Node::getParent() {
  return parent;
}

// Destructor
Node::~Node() {
  left = nullptr;
  right = nullptr;
  parent = nullptr;
}
