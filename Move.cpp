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

Move* Move::Judge(Move* compared) {
  if (compared->getid() > this->getid()) {
    return compared;
  }
  return this;
}
// Work with Yige Jin(a1837312) & KaiQi Lin(a1810130)