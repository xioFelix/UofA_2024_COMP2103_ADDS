#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
public:
    Human(std::string name = "Human");
    char makeMove();
    std::string getName();
private:
    std::string nameGet;
};

#endif