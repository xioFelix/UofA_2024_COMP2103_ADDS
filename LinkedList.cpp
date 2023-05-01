#include "LinkedList.h"

#include <limits>

using namespace std;

LinkedList::LinkedList() { start = NULL; }

LinkedList::LinkedList(int* array, int len) {
  start = NULL;
  for (int i = 0; i < len; i++) {
    addEnd(array[i]);
  }
}

void LinkedList::addFront(int newItem) {
  Node* temp = new Node(newItem);
  temp->setNext(start);
  start = temp;
}

void LinkedList::addEnd(int newItem) {
  if (start) {
    Node* temp = new Node(newItem);
    Node* pre = start;
    while (pre->getNext()) {
      pre = pre->getNext();
    }
    pre->setNext(temp);
  } else {
    addFront(newItem);
  }
}

void LinkedList::insertPosition(int pos, int newNum) {
  if (pos < 1 || !start) {
    addFront(newNum);
    return;
  }

  int index = 1;
  Node* current = start->getNext();
  Node* pre = start;
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
  if (!start) {
    cout << "0";
    return 0;
  }

  Node* current = start;
  int pos = 1;
  while (current) {
    int val = current->getValue();
    if (val == target) {
      cout << pos << " ";
      return pos;
    } else {
      pos++;
    }
    current = current->getNext();
  }
  cout << "0";
  return 0;
}

void LinkedList::deleteFront() {
  if (start) {
    if (start->getNext()) {
      Node* newstart = start->getNext();
      start = newstart;
    } else {
      start = NULL;
    }
  }
}

void LinkedList::deleteEnd() {
  if (start) {
    if (start->getNext()) {
      Node* current = start->getNext();
      Node* pre = start;
      while (current->getNext()) {
        current = current->getNext();
        pre = pre->getNext();
      }
      pre->setNext(NULL);
    } else {
      start = NULL;
    }
  }
}

void LinkedList::deletePosition(int pos) {
  if (!start) {
    return;
  }
  int index = 1;
  Node* pre = start;
  Node* curr = start->getNext();
  while (curr) {
    if (pos == index + 1) {
      Node* next = curr->getNext();
      pre->setNext(next);
    }
    curr = curr->getNext();
    pre = pre->getNext();
    index++;
  }

  if (pos < 1 || pos > index) {
    cout << "outside range" << endl;
  }
}

int LinkedList::get(int pos) {
  int index = 1;

  if (start) {
    Node* a = start;
    Node* curr = a;
    while (curr) {
      if (index == pos) {
        cout << curr->getValue() << " ";
        return index;
      }
      curr = curr->getNext();
      index++;
    }

    if (pos > index || pos < 1) {
      cout << numeric_limits<int>::max() << " ";
      return numeric_limits<int>::max();
    }
  }
  return 0;
}

void LinkedList::printList() {
  if (start) {
    cout << start->getValue() << " ";
    Node* current = start;
    while (current->getNext()) {
      current = current->getNext();
      cout << current->getValue() << " ";
    }
  }
}

LinkedList::~LinkedList() {}