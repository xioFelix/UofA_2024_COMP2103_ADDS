#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>

#include "Move.h"
#include "rps.h"
#include "Player.h"
#include "moropinzee.h"

class Human : public Player {
 private:
  std::string PlayerName;
  Move* moveName;

 public:
  std::string Name;
  Human();
  Human(std::string Name);
  Move* makeMove();
  std::string getName();
  ~Human();
};

#endif