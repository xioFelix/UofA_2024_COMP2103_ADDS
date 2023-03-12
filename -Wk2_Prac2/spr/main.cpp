#include <string.h>

#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Move.h"
#include "rps.h"
#include "Player.h"
#include "Referee.h"
#include "moropinzee.h"
using namespace std;

int main() {

  Player *a1 = new Human("player1");
  Player *a2 = new Human("player2");
  Player *com = new Computer;
  Referee *r = new Referee();
  Player *winner;

  winner = r->refGame(a1, a2);
  cout << "first run\n";
  if (winner != nullptr) {
    cout << winner->getName() << " win!" << endl;
  } else if (winner == nullptr) {
    cout << "Tie" << endl;
  }

  return 0;
}