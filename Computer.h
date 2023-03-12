#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

#include "Move.h"
#include "rps.h"
#include "Player.h"
#include "moropinzee.h"
class Computer : public Player {
 private:
  std::string PlayerName = " ";
  Move* moveName;

 public:
  Computer();
  Move* makeMove();
  std::string getName();
  // ~Computer();
};

#endif