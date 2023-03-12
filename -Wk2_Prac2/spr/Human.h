#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>

#include "Move.h"
#include "Paper.h"
#include "Player.h"
#include "Rock.h"
#include "Scissors.h"
#include "moropinzee.h"

class Human : public Player {
 private:
  std::string _name;
  Move* _move;

 public:
  std::string Name;
  Human();
  Human(std::string Name);
  Move* makeMove();
  std::string getName();
  ~Human();
};

#endif