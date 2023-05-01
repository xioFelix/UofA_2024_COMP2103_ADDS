#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <vector>

#include "Node.h"

class LinkedList {
 public:
  void addFront(int newNum);
  void addEnd(int newNum);
  void insertPosition(int pos, int newNum);
  int search(int target);
  bool deletePosition(int pos);
  int get(int pos);
  void printList();

  LinkedList();
  LinkedList(int* array, int len);
  ~LinkedList();

 private:
  Node* head;
};
#endif