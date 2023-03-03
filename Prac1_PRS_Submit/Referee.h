#ifndef REFEREE_H
#define REFEREE_H

#include "player.h"

class Referee {
public:
    Referee();
    Player* refGame(Player* player1, Player* player2);
};

#endif // REFEREE_H
