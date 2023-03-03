#ifndef COMPUTER_H
#define COMPUTER_H

#include "player.h"

class Computer : public Player {
public:
    char makeMove();
    std::string getName();
};

#endif // COMPUTER_H
