#include "LinkedList.h"

#include <limits>

using namespace std;

LinkedList::LinkedList() { head = NULL; }

LinkedList::LinkedList(int* array, int len) {
  head = NULL;
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
    cout << "0";
    return 0;
  }

  Node* current = head;
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

bool LinkedList::deletePosition(int pos) {
  int index = 1;
  Node* pre = head;
  Node* curr = head->getNext();
  while (curr) {
    if (pos == index + 1) {
      Node* text = curr->getNext();
      pre->setNext(text);
      return true;
    }
    curr = curr->getNext();
    pre = pre->getNext();
    index++;
  }

  if (pos < 1 || pos > index) {
    return false;
  }
}

int LinkedList::get(int pos) {
  int index = 1;

  if (head) {
    Node* a = head;
    Node* curr = a;
    while (curr) {
      if (index == pos) {
        cout << curr->getValue();
        index++;
      }
      curr = curr->getNext();

    }

    if (pos > index || pos < 1) {
      cout << numeric_limits<int>::max() << " ";
      return numeric_limits<int>::max();
    }
  }
  return 0;
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