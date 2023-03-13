#include "Referee.h"

#include <iostream>

#include "Move.h"
#include "Player.h"
#include "moropinzee.h"
#include "rps.h"
Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
  Move* m1 = new Move;
  Move* m2 = new Move;
  m1 = player1->makeMove();
  m2 = player2->makeMove();
  Move* winner = new Move;
  winner = m1->Judge(m2);
  if (winner == nullptr) {
    return nullptr;
  } else if (winner->getName() == m2->getName()) {
    return player2;
  } else if (winner->getName() == m1->getName()) {
    return player1;
  } else {
    return nullptr;
  }
}
// Work with Yige Jin(a1837312) & KaiQi Lin(a1810130)