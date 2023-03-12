#include "Paper.h"

#include <string.h>

#include <iostream>

#include "Move.h"
using namespace std;

Paper::Paper() {
  NameOfMove = "Paper";
  id = 0;
}
void Paper::setMove(std::string change_) {
  NameOfMove = "Paper";
  id = 0;
}
string Paper::getName() { return NameOfMove; }

int Paper::getid() { return id; }

Move* Paper::WinOrLoss(Move* compare) {
  if (compare->getid() == 0) {
    if (compare->getName() == "Scissors") {
      return compare;
    } else if (compare->getName() == "Rock") {
      return new Paper;
    }
  }
  return nullptr;
}

Paper::~Paper(){};
