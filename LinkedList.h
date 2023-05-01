#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <vector>

#include "Node.h"

class LinkedList {
 public:
  void addFront(int newItem);
  void addEnd(int newItem);
  void insertPosition(int pos, int newItem);
  int search(int target);
  void deleteFront();
  void deleteEnd();
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