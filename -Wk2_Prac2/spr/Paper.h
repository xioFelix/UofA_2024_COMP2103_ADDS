#ifndef Paper_h
#define Paper_h
#include <iostream>

#include "Move.h"
class Paper : public Move {
 private:
 public:
  Paper();
  void setMove(std::string change_);
  std::string getName();
  float getid();
  Move* WinOrLoss(Move* compare);
  ~Paper();
};

#endif