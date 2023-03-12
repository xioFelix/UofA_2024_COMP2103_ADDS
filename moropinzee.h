#ifndef MOR_H
#define MOR_H

#include <iostream>

#include "Move.h"

class moropinzee : public Move {
 private:
 public:
  moropinzee();
  moropinzee(std::string moveName);
  void setMove(std::string RPMoveName);
  std::string getName();
  float getid();
  Move* Judge(Move* compare);
  ~moropinzee();
};

#endif