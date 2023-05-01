#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <vector>

#include "Node.h"

class LinkedList {
 public:
  void addFront(int newItem);
  void addEnd(int newItem);
  void addAtPosition(int position, int newItem);
  int search(int item);
  void deleteFront();
  void deleteEnd();
  void deletePosition(int position);
  int getItem(int position);
  void printItems();

  LinkedList();
  LinkedList(std::vector<int>);
  virtual ~LinkedList();

 private:
  Node *start;
};
#endif