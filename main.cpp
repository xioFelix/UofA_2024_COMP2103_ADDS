#include <iostream>

#include "LinkedList.h"

using namespace std;

int main(int argc, char** argv) {
  vector<int> v;
  string input;
  vector<int> end;
  for (int i = 0; i < 4; i += 1) {
    int start;
    cin >> start;
    v.push_back(start);
  }
  cin >> input;
  for (int i = 0; i < 2; i += 1) {
    int start;
    cin >> start;
    end.push_back(start);
  }

  LinkedList* list;
  list = new LinkedList(v);

  if (input == "I") {
    list->addAtPosition(end.at(0), end.at(1));
  } else if (input == "S") {
    list->search(end.at(0));
  } else if (input == "D") {
    list->deletePosition(end.at(0));
  } else if (input == "G") {
    list->getItem(end.at(0));
  }
  list->printItems();

  return 0;
}