#ifndef RPS_H
#define RPS_H

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
  Move* Judge(Move* compared);
  // ~rps();
};

#endif