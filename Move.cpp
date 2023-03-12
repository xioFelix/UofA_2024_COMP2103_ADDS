#include "Move.h"

#include <string.h>

#include <iostream>

using namespace std;

// Move::~Move() {}

Move::Move() { NameOfMove = " "; }

Move::Move(string input) : NameOfMove(input) {}

void Move::setMove(std::string RPMoveName) { NameOfMove = RPMoveName; }

string Move::getName() { return NameOfMove; }

float Move::getid() { return id; }

Move* Move::Judge(Move* compare) {
  if (compare->getid() > this->getid()) {
    return compare;
  }
  return this;
}
