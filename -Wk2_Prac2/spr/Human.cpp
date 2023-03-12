#include "Human.h"

#include <string.h>

#include <iostream>

#include "Move.h"
#include "Paper.h"
#include "Player.h"
#include "Rock.h"
#include "Scissors.h"
#include "moropinzee.h"
using namespace std;
Human::Human() { _name = "Human"; }
Human::Human(string Name) { _name = Name; };
Move* Human::makeMove() {
  string temp;
  cout << "Enter move: ";
  cin >> temp;
  if (temp == "Rock") {
    _move = new Rock;
  } else if (temp == "Paper") {
    return new Paper;
  } else if (temp == "Scissors") {
    _move = new Scissors;
  }
  // create Moropinzee type
  else if (temp == "Robot") {
    _move = new moropinzee("Robot");
  } else if (temp == "Pirate") {
    _move = new moropinzee("Pirate");
  } else if (temp == "Ninja") {
    _move = new moropinzee("Ninja");
  } else if (temp == "Monkey") {
    return new moropinzee("Monkey");
  } else if (temp == "Zombie") {
    _move = new moropinzee("Zombie");
  } else {
    return nullptr;
  }
  return _move;
}

string Human::getName() { return _name; }
Human::~Human() { delete _move; }