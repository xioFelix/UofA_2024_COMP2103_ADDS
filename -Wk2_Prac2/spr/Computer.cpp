#include "Computer.h"

#include <string.h>

#include <iostream>

#include "Move.h"
#include "Paper.h"
#include "Player.h"
#include "Rock.h"
#include "Scissors.h"
#include "moropinzee.h"
using namespace std;

Computer::Computer() { _name = "Computer"; }

Move* Computer::makeMove() {
  _move = new Rock;
  return _move;
}

string Computer::getName() { return _name; }
Computer::~Computer() { delete _move; }