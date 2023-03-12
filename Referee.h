#ifndef REFEREE_H
#define REFEREE_H

#include "Move.h"
#include "rps.h"
#include "moropinzee.h"

class Referee {
 public:
  Referee();
  Player* refGame(Player* player1, Player* player2);
};

#endif