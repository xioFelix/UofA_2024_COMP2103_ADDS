#ifndef Rock_h
#define Rock_h
#include <iostream>

#include "Move.h"
class Rock : public Move {
 public:
  Rock(/* args */);
  void setMove(std::string change_);
  std::string getName();
  int getid();
  Move* WinOrLoss(Move* compare);
  ~Rock();
};

#endif