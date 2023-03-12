#ifndef MOR_H
#define MOR_H

#include <iostream>

#include "Move.h"

class moropinzee : public Move {
 private:
 public:
  moropinzee(/* args */);
  moropinzee(std::string _name);
  void setMove(std::string change_);
  std::string getName();
  int getid();
  Move* WinOrLoss(Move* compare);
  ~moropinzee();
};

#endif