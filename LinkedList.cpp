#include "LinkedList.h"

#include <iostream>
#include <limits>

#include "Node.h"

using namespace std;

LinkedList::LinkedList() { head = nullptr; }

LinkedList::LinkedList(int* array, int len) {
  head = nullptr;
  for (int i = 0; i < len; i++) {
    addEnd(array[i]);
  }
}

void LinkedList::addFront(int newItem) {
  Node* temp = new Node(newItem);
  temp->setNext(head);
  head = temp;
}

void LinkedList::addEnd(int newItem) {
  if (head) {
    Node* temp = new Node(newItem);
    Node* pre = head;
    while (pre->getNext()) {
      pre = pre->getNext();
    }
    pre->setNext(temp);
  } else {
    addFront(newItem);
  }
}

void LinkedList::insertPosition(int pos, int newNum) {
  if (pos < 1 || !head) {
    addFront(newNum);
    return;
  }

  int index = 1;
  Node* current = head->getNext();
  Node* pre = head;
  while (current) {
    if (pos == index + 1) {
      Node* temp = new Node(newNum);
      pre->setNext(temp);
      temp->setNext(current);
      return;
    }
    index++;
    current = current->getNext();
    pre = pre->getNext();
  }
  addEnd(newNum);
}

int LinkedList::search(int target) {
  if (!head) {
    return -1;
  }

  Node* current = head;
  int pos = 1;
  while (current) {
    int val = current->getValue();
    if (val == target) {
      return pos;
    } else {
      pos++;
    }
    current = current->getNext();
  }
  return -1;
}

bool LinkedList::deletePosition(int pos) {
  if (!head) {
    return false;
  }

  if (pos == 1) {
    Node* temp = head;
    head = head->getNext();
    delete temp;
    return true;
  }

  int index = 1;
  Node* pre = head;
  Node* curr = head->getNext();
  while (curr) {
    if (pos == index + 1) {
      Node* temp = curr;
      pre->setNext(curr->getNext());
      delete temp;
      return true;
    }
    curr = curr->getNext();
    pre = pre->getNext();
    index++;
  }

  return false;
}

int LinkedList::get(int pos) {
  if (!head) {
    return numeric_limits<int>::max();
  }

  int index = 1;
  Node* curr = head;
  while (curr) {
    if (index == pos) {
      return curr->getValue();
    }
    curr = curr->getNext();
    index++;
  }

  return numeric_limits<int>::max();
}

void LinkedList::printList() {
  if (head) {
    cout << "[" << head->getValue() << " ";
    Node* current = head;
    bool last = false;
    while (current->getNext()) {
      current = current->getNext();
      if (current->getNext() == nullptr) {
        last = true;
      }
      cout << current->getValue();
      if (!last) {
        cout << " ";
      }
    }
    cout << "]" << endl;
  }
}

LinkedList::~LinkedList() {}