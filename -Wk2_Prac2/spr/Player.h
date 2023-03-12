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

  virtual Move* makeMove() = 0;  // return type is changed, the return type of
                                 // this is a hint to the polymorphism
  virtual std::string
  getName() = 0;  // returns the name of the Player as a string -
                  // this should match what the user typed in

  ~Player();
};

#endif