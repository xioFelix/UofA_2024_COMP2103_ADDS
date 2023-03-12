#include "Scissors.h"

#include <string.h>

#include <iostream>

// #include "Computer.h"
// #include "Human.h"
#include "Move.h"
using namespace std;

Scissors::Scissors() {
  NameOfMove = "Scissors";
  id = 0;
}
void Scissors::setMove(std::string change_) {
  NameOfMove = "Scissors";
  id = 0;
}

string Scissors::getName() { return NameOfMove; }

int Scissors::getid() { return id; }

Move* Scissors::WinOrLoss(Move* compare) {
  if (compare->getid() == 0) {
    if (compare->getName() == "Rock") {
      return compare;
    } else if (compare->getName() == "Paper") {
      return new Scissors;
    }
  }
  return nullptr;
}

Scissors::~Scissors() {}