#ifndef Player_H
#define Player_H
#include <string.h>

#include <iostream>

#include "Move.h"
#include "moropinzee.h"
#include "rps.h"
class Player {
 protected:
 public:
  // Player();

  virtual Move* makeMove() = 0;
  virtual std::string getName() = 0;
  // ~Player();
};

#endif
// Work with Yige Jin(a1837312) & KaiQi Lin(a1810130)