#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

#include "Move.h"
#include "Paper.h"
#include "Player.h"
#include "Rock.h"
#include "Scissors.h"
#include "moropinzee.h"
class Computer : public Player {
 private:
  std::string _name = " ";
  Move* _move;

 public:
  Computer();
  Move* makeMove();
  std::string getName();
  ~Computer();
};

#endif