#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "Move.h"

class Player : public Move{
public:
    Player();
    Player(std::string name);
    virtual Move *makeMove( );
    virtual std::string getName();

protected:
    std::string moveName;
};

#endif