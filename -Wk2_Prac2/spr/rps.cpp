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
    id = -1;
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
    id = -1;
  }
}

Move* rps::Judge(Move* compared) {
  string temp = NameOfMove;
  if ( id == 1 ) {
      if (compared->getid() == 2 ){
        return new rps(temp);
      }
      else if (compared->getid() == 3){
        return compared;
      }
    }
  else if ( id == 2 ){
      if (compared->getid() == 1 ){
        return new rps(temp);
      }
      else if (compared->getid() == 3){
        return compared;
      }
    }
  else if ( id == 3 ){
      if (compared->getid() == 2 ){
        return new rps(temp);
      }
      else if (compared->getid() == 1){
        return compared;
      }
    }
  else {return nullptr;}
}