#ifndef RE_H
#define RE_H
#include "Move.h"
#include "Paper.h"
#include "Player.h"
#include "Rock.h"
#include "Scissors.h"
#include "moropinzee.h"
class Referee {
 public:
  Referee();
  Player* refGame(Player* player1, Player* player2);
};

#endif