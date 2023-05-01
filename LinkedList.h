#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <vector>

#include "Node.h"

class LinkedList {
 public:
  void addFront(int newItem);
  void addEnd(int newItem);
  void insertPosition(int position, int newItem);
  int search(int item);
  void deleteFront();
  void deleteEnd();
  void deletePosition(int position);
  int get(int position);
  void printList();

  LinkedList();
  LinkedList(int* array, int len);
  virtual ~LinkedList();

 private:
  Node *start;
};
#endif