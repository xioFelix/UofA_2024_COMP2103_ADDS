#ifndef MOR_H
#define MOR_H

#include <iostream>

#include "Move.h"

class moropinzee : public Move {
 private:
 public:
  moropinzee();
  moropinzee(std::string PlayerName);
  void setMove(std::string moveName);
  std::string getName();
  float getid();
  Move* Judge(Move* compare);
  ~moropinzee();
};

#endif