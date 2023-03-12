#ifndef MOR_H
#define MOR_H

#include <iostream>

#include "Move.h"

class rps : public Move {
 private:
 public:
  rps(/* args */);
  rps(std::string moveName);
  void setMove(std::string change_);
  std::string getName();
  float getid();
  Move* WinOrLoss(Move* compare);
  ~rps();
};

#endif