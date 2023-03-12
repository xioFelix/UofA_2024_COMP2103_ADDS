#include "Computer.h"

#include <string.h>

#include <iostream>

#include "Move.h"
#include "rps.h"
#include "Player.h"
#include "moropinzee.h"
using namespace std;

Computer::Computer() { PlayerName = "Computer"; }

Move* Computer::makeMove() {
  moveName = new rps("Paper");
  return moveName;
}

string Computer::getName() { return PlayerName; }
// Computer::~Computer() { delete moveName; }