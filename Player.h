#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    Player();
    Player(std::string name);
    virtual std::string getName();
    virtual char makeMove();
protected:
    std::string name;
};

#endif // PLAYER_H
