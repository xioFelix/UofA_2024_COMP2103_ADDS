#include <string.h>

#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Move.h"
#include "Paper.h"
#include "Player.h"
#include "Referee.h"
#include "Rock.h"
#include "Scissors.h"
#include "moropinzee.h"
using namespace std;

int main() {
  // Move* testmon = new moropinzee("Robot");
  // cout << "id = " << testmon->getid() << endl;
  // cout << "move = " << testmon->getName() << endl;

  Player *a1 = new Human("player1");
  // cout << a1->getName() << endl;
  // Move *t1 = a1->makeMove();
  // cout << t1->getName() << endl;

  Player *a2 = new Human("player2");
  // cout << a2->getName() << endl;
  // Move *t2 = a2->makeMove();
  // cout << t2->getName() << endl;

  Player *com = new Computer;
  // Move *t3 = com->makeMove();
  // cout << t3->getName() << endl;

  Referee *r = new Referee();

  Player *winner;

  // // human vs human
  winner = r->refGame(a1, a2);
  cout << "first run\n";
  if (winner != nullptr) {
    cout << winner->getName() << " win!" << endl;
  } else if (winner == nullptr) {
    cout << "Tie" << endl;
  }

  // human vs computer
  // winner = r->refGame(a1, com);
  // if (winner != nullptr) {
  //   cout << winner->getName() << " win!" << endl;
  // } else if (winner == nullptr) {
  //   cout << "Tie" << endl;
  // }
  return 0;
}