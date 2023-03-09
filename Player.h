#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include<iostream>

class Player {
public:
    Player();
    Player(std::string name);
    virtual std::string getName();
    virtual char makeMove();
    Move *makeMove( );
    std::string getName( ); 
protected:
    std::string name;
};

#endif
