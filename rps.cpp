#include "rps.h"

#include <string.h>

#include <iostream>

#include "Move.h"

using namespace std;

rps::rps() {}
string rps::getName() { return NameOfMove; }
float rps::getid() { return id; }

// ComputerSet
rps::rps(std::string moveName) {
  NameOfMove = moveName;
  if (moveName == "Rock") {
    id = 4;
  } else if (moveName == "Scissor") {
    id = 5;
  } else if (moveName == "Paper") {
    id = 6;
  } else {
    id = 100;
  }
}

// HumanSet
void rps::setMove(std::string RPMoveName) {
  NameOfMove = RPMoveName;
  if (RPMoveName == "Rock") {
    id = 4;
  } else if (RPMoveName == "Scissor") {
    id = 5;
  } else if (RPMoveName == "Paper") {
    id = 6;
  } else {
    id = 100;
  }
}

Move* rps::Judge(Move* compared) {
  string temp = NameOfMove;
  if (id == 4) {
    if (compared->getid() == 5) {
      return new rps(temp);
    } else if (compared->getid() == 6) {
      return compared;
    }
  } else if (id == 5) {
    if (compared->getid() == 4) {
      return new rps(temp);
    } else if (compared->getid() == 6) {
      return compared;
    }
  } else if (id == 6) {
    if (compared->getid() == 5) {
      return new rps(temp);
    } else if (compared->getid() == 4) {
      return compared;
    }
  } else {
    return nullptr;
  }
  return nullptr;
}
// rps::~rps() {}