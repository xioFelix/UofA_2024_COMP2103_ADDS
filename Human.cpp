#include "Human.h"

#include <string.h>

#include <iostream>

#include "Move.h"
#include "rps.h"
#include "Player.h"

#include "moropinzee.h"
using namespace std;
Human::Human() { PlayerName = "Human"; }
Human::Human(string Name) { PlayerName = Name; };
Move* Human::makeMove() {
  string temp;
  cout << "Enter move: ";
  cin >> temp;
  if (temp == "Rock") {
    moveName = new rps("Rock");
  } else if (temp == "Paper") {
    return new rps("Paper");
  } else if (temp == "Scissors") {
    moveName = new rps("Scissors");
  }

  else if (temp == "Robot") {
    moveName = new moropinzee("Robot");
  } else if (temp == "Pirate") {
    moveName = new moropinzee("Pirate");
  } else if (temp == "Ninja") {
    moveName = new moropinzee("Ninja");
  } else if (temp == "Monkey") {
    return new moropinzee("Monkey");
  } else if (temp == "Zombie") {
    moveName = new moropinzee("Zombie");
  } else {
    return nullptr;
  }
  return moveName;
}

string Human::getName() { return PlayerName; }
Human::~Human() { delete moveName; }