#ifndef Scissors_h
#define Scissors_h
#include <iostream>

#include "Move.h"
class Scissors : public Move {
 public:
  Scissors(/* args */);
  void setMove(std::string change_);
  std::string getName();
  int getid();
  Move* WinOrLoss(Move* compare);
  ~Scissors();
};

#endif