#ifndef MOR_H
#define MOR_H

#include <iostream>

#include "Move.h"

class moropinzee : public Move {
 private:
 public:
  moropinzee();
  moropinzee(std::string PlayerName);
  void setMove(std::string change_);
  std::string getName();
  float getid();
  Move* WinOrLoss(Move* compare);
  ~moropinzee();
};

#endif