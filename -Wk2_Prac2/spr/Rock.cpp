#include "Rock.h"

#include <string.h>

#include <iostream>

// #include "Computer.h"
// #include "Human.h"
#include "Move.h"
using namespace std;

Rock::Rock() {
  NameOfMove = "Rock";
  id = 0;
}
void Rock::setMove(std::string change_) {
  NameOfMove = "Rock";
  id = 0;
}

string Rock::getName() { return NameOfMove; }

int Rock::getid() { return id; }

Move* Rock::WinOrLoss(Move* compare) {
  if (compare->getid() == 0) {
    if (compare->getName() == "Paper") {
      return compare;
    } else if (compare->getName() == "Scissors") {
      return new Rock;
    }
  }
  return nullptr;
}

Rock::~Rock() {}