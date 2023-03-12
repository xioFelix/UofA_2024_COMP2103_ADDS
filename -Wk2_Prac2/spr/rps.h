#ifndef MOR_H
#define MOR_H

#include <iostream>

#include "Move.h"

class rps : public Move {
 private:
 public:
  rps();
  rps(std::string moveName);
  void setMove(std::string RPMoveName);
  std::string getName();
  float getid();
  Move* WinOrLoss(Move* compare);
  ~rps();
};

#endif