#include "Move.h"

#include <string.h>

#include <iostream>

// #include "Computer.h"
// #include "Human.h"
using namespace std;
Move::Move() { NameOfMove = " "; }

Move::Move(string _input) : NameOfMove(_input) {}

void Move::setMove(std::string change_) { NameOfMove = change_; }

string Move::getName() { return NameOfMove; }

int Move::getid() { return id; }

Move* Move::WinOrLoss(Move* compare) {
  if (compare->getid() > this->getid()) {
    return compare;
  }
  return this;
}

// int Move::findid() {
//   if (this->getName() == "Rock" || this->getName() == "Scissors" ||
//       this->getName() == "Paper") {
//     id = 0;
//     return id;
//   }
//   if (this->getName() == "Robot") {
//     id = 1;
//     return id;
//   } else if (this->getName() == "Pirate") {
//     id = 2;
//     return id;
//   } else if (this->getName() == "Ninja") {
//     id = 3;
//     return id;
//   } else if (this->getName() == "Monkey") {
//     id = 4;
//     return id;
//   } else if (this->getName() == "Zombie") {
//     id = 5;
//     return id;
//   }
//   return -1;
// }

// Move* Move::winner(Move* player1, Move* player2) {
//   string p1ID = player1->getName();
//   string p2ID = player2->getName();

//   if (p1ID == "Rock" && p2ID == "Scissors") {
//     return player1;
//   } else if (p1ID == "Paper" && p2ID == "Rock") {
//     return player1;
//   } else if (p1ID == "Scissors" && p2ID == "Paper") {
//     return player1;
//   }  // player1 win in classic RPS
//   else if (p2ID == "Rock" && p1ID == "Scissors") {
//     return player2;
//   } else if (p2ID == "Paper" && p1ID == "Rock") {
//     return player2;
//   } else if (p2ID == "Scissors" && p1ID == "Paper") {
//     return player2;
//   }  // player2 win in classic RPS
//   //
//   //
//   //
//   if (p1ID == "Robot") {
//     if (p2ID == "Ninja" || p2ID == "Zombie") {
//       return player1;
//     } else if (p2ID == "Pirate" || p2ID == "Monkey") {
//       return player2;
//     }
//   }
// }

// Move* Move::winner(Move* player1, Move* player2) {
//   int p1ID = player1->findid();
//   int p2ID = player2->findid();
//   if (p1ID == p2ID) return nullptr;
//   // cout << "id1 = " << p1ID << "id2 = " << p2ID << endl;
//   if (p1ID == 0 && p2ID == 0) {
//     if (player1->getName() == "Rock" && player2->getName() == "Scissors") {
//       return player1;
//     } else if (player1->getName() == "Paper" && player2->getName() == "Rock")
//     {
//       return player1;
//     } else if (player1->getName() == "Scissors" &&
//                player2->getName() == "Paper") {
//       return player1;
//     }  // player1 win in classic RPS
//     else if (player2->getName() == "Rock" && player1->getName() ==
//     "Scissors") {
//       return player2;
//     } else if (player2->getName() == "Paper" && player1->getName() == "Rock")
//     {
//       return player2;
//     } else if (player2->getName() == "Scissors" &&
//                player1->getName() == "Paper") {
//       return player2;
//     }  // player2 win in classic RPS
//   } else if (p1ID > p2ID) {
//     if ((p1ID - p2ID) % 2 != 0) {
//       return player1;
//     } else if ((p1ID - p2ID) % 2 == 0) {
//       return player2;
//     }
//   } else if (p2ID > p1ID) {
//     if ((p2ID - p1ID) % 2 != 0) {
//       return player2;
//     } else if ((p2ID - p1ID) % 2 == 0) {
//       return player1;
//     }
//   }
//   return nullptr;
// }

Move::~Move() {}