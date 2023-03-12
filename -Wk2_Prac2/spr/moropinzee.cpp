#include "moropinzee.h"

#include <string.h>

#include <iostream>

#include "Move.h"

using namespace std;

moropinzee::moropinzee() {}
string moropinzee::getName() { return NameOfMove; }
float moropinzee::getid() { return id; }

moropinzee::moropinzee(std::string _name) {
  NameOfMove = _name;
  if (_name == "Robot") {
    id = 1;
  } else if (_name == "Pirate") {
    id = 1.5;
  } else if (_name == "Ninja") {
    id = 2;
  } else if (_name == "Monkey") {
    id = 2.5;
  } else if (_name == "Zombie") {
    id = 3;
  } else {
    id = 10;
  }
}

void moropinzee::setMove(std::string change_) {
  NameOfMove = change_;
  if (change_ == "Robot") {
    id = 1;
  } else if (change_ == "Pirate") {
    id = 1.5;
  } else if (change_ == "Ninja") {
    id = 2;
  } else if (change_ == "Monkey") {
    id = 2.5;
  } else if (change_ == "Zombie") {
    id = 3;
  } else {
    id = 10;
  }
}

Move* moropinzee::WinOrLoss(Move* compare) {
  string temp = NameOfMove;
  if (id > compare->getid()) {
    if ((id - compare->getid()) - (int)(id - compare->getid()) == 0) {
      return new moropinzee(temp);
    } else if ((id - compare->getid()) - (int)(id - compare->getid()) == 0) {
      return compare;
    }
  } else if (compare->getid() > id) {
    if ((id - compare->getid()) - (int)(id - compare->getid()) == 0) {
      return compare;
    } else if ((id - compare->getid()) - (int)(id - compare->getid()) == 0) {
      return new moropinzee(temp);
    }
  } else if (id == compare->getid()) {
    return nullptr;
  }

  return nullptr;
}

moropinzee::~moropinzee() {}