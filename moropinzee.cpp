#include "moropinzee.h"

#include <string.h>

#include <iostream>

#include "Move.h"

using namespace std;

moropinzee::moropinzee() {}
string moropinzee::getName() { return NameOfMove; }
float moropinzee::getid() { return id; }

//ComputerSet
moropinzee::moropinzee(std::string moveName) {
  NameOfMove = moveName;
  if (moveName == "Robot") {
    id = 1;
  } else if (moveName == "Pirate") {
    id = 1.5;
  } else if (moveName == "Ninja") {
    id = 2;
  } else if (moveName == "Monkey") {
    id = 2.5;
  } else if (moveName == "Zombie") {
    id = 3;
  } else {
    id = 100;
  }
}

// HumanSet
void moropinzee::setMove(std::string RPMoveName) {
  NameOfMove = RPMoveName;
  if (RPMoveName == "Robot") {
    id = 1;
  } else if (RPMoveName == "Pirate") {
    id = 1.5;
  } else if (RPMoveName == "Ninja") {
    id = 2;
  } else if (RPMoveName == "Monkey") {
    id = 2.5;
  } else if (RPMoveName == "Zombie") {
    id = 3;
  } else {
    id = 100;
  }
}

Move* moropinzee::Judge(Move* compared) {
  string temp = NameOfMove;
  if (id > compared->getid()) {
    if ((id - compared->getid()) - (int)(id - compared->getid()) == 0) {
      return new moropinzee(temp);
    } else if ((id - compared->getid()) - (int)(id - compared->getid()) != 0) {
      return compared;
    }
  } else if (compared->getid() > id) {
    if ((compared->getid() - id) - (int)(compared->getid() - id) == 0) {
      return new moropinzee(temp);
    } else if ((compared->getid() - id) - (int)(compared->getid() - id) != 0) {
      return compared;
    }
  } else {
      return nullptr;
  }
}
// moropinzee::~moropinzee() {}