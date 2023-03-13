#include "Computer.h"

#include <string.h>

#include <iostream>

#include "Move.h"
#include "Player.h"
#include "moropinzee.h"
#include "rps.h"
using namespace std;

Computer::Computer() { PlayerName = "Computer"; }

Move* Computer::makeMove() {
  moveName = new rps("Rock");
  return moveName;
}

string Computer::getName() { return PlayerName; }
// Computer::~Computer() { delete moveName; }
// Work with Yige Jin(a1837312) & KaiQi Lin(a1810130)