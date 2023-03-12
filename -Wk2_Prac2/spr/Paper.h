#ifndef Paper_h
#define Paper_h
#include <iostream>

#include "Move.h"
class Paper : public Move {
 private:
 public:
  Paper(/* args */);
  void setMove(std::string change_);
  std::string getName();
  int getid();
  Move* WinOrLoss(Move* compare);
  ~Paper();
};

#endif