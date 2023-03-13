#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>

#include "Move.h"
#include "Player.h"
#include "moropinzee.h"
#include "rps.h"

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
  // ~Human();
};

#endif
// Work with Yige Jin(a1837312) & KaiQi Lin(a1810130)