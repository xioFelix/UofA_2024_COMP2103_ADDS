#include "rps.h"

#include <string.h>

#include <iostream>

#include "Move.h"

using namespace std;

rps::rps() {}
string rps::getName() { return NameOfMove; }
float rps::getid() { return id; }

//Computer
rps::rps(std::string moveName) {
  NameOfMove = moveName;
  if (moveName == "Rock") {
    id = 1;
  } else if (moveName == "Scissor") {
    id = 2;
  } else if (moveName == "Paper") {
    id = 3;
  } else {
    id = 10;
  }
}

//Human
void rps::setMove(std::string RPMoveName) {
  NameOfMove = RPMoveName;
  if (RPMoveName == "Rock") {
    id = 1;
  } else if (RPMoveName == "Scissor") {
    id = 2;
  } else if (RPMoveName == "Paper") {
    id = 3;
  } else {
    id = 10;
  }
}

Move* rps::Judge(Move* compare) {
  string temp = NameOfMove;
  if ( id > compare->getid() && id < 3 ) {
      return compare;
    }
  else if (compare->getid() > id){
      return new rps(temp);
    }
  else if (id == compare->getid()) {
    return nullptr;
  }