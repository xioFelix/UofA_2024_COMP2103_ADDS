#ifndef Player_H
#define Player_H
#include <string.h>

#include <iostream>

#include "Move.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"
#include "moropinzee.h"
class Player {
 protected:
 public:
  Player();

  virtual Move* makeMove() = 0;
  virtual std::string
  getName() = 0;
  ~Player();
};

#endif