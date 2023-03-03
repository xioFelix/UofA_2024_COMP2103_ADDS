#include <iostream>
#include "human.h"
#include "computer.h"
#include "referee.h"

int main() {
    Player* human = new Human();
    Player* computer = new Computer();

    Referee referee;
    Player* winner = referee.refGame(human, computer);

    if (winner == human) {
        std::cout << human->getName() << " Wins" << std::endl;
    }
    else if (winner == computer) {
        std::cout << computer->getName() << " Wins" << std::endl;
    }
    else {
        std::cout << "It's a Tie" << std::endl;
    }

    /*delete human;
    delete computer;*/

    return 0;
}
