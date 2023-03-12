#include "rps.h"

#include <string.h>

#include <iostream>

#include "Move.h"

using namespace std;

rps::rps() {}
string rps::getName() { return NameOfMove; }
float rps::getid() { return id; }

rps::rps(std::string moveName) {
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
    id = 10;
  }
}

void rps::setMove(std::string RPMoveName) {
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
    id = 10;
  }
}

Move* rps::WinOrLoss(Move* compare) {
  string temp = NameOfMove;
  if (id > compare->getid()) {
    if ((id - compare->getid()) - (int)(id - compare->getid()) == 0) {
      return new rps(temp);
    } else if ((id - compare->getid()) - (int)(id - compare->getid()) == 0) {
      return compare;
    }
  } else if (compare->getid() > id) {
    if ((id - compare->getid()) - (int)(id - compare->getid()) == 0) {
      return compare;
    } else if ((id - compare->getid()) - (int)(id - compare->getid()) == 0) {
      return new rps(temp);
    }
  } else if (id == compare->getid()) {
    return nullptr;
  }

  return nullptr;
}

rps::~rps() {}