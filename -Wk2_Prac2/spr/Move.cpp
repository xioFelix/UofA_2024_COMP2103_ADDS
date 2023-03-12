#include "Move.h"

#include <string.h>

#include <iostream>

using namespace std;

Move::~Move() {}

Move::Move() { NameOfMove = " "; }

Move::Move(string _input) : NameOfMove(_input) {}

void Move::setMove(std::string change_) { NameOfMove = change_; }

string Move::getName() { return NameOfMove; }

float Move::getid() { return id; }

Move* Move::Judge(Move* compare) {
  if (compare->getid() > this->getid()) {
    return compare;
  }
  return this;
}
