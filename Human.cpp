#include <iostream>
#include "Human.h"

Human::Human(std::string name) : nameGet(name) {}

Move *Human::makeMove() {
    std::cout << "Enter move: ";
    std::string move;
    std::cin >> move;
    return Move(makeMove);
}

std::string Human::getName() {
    return nameGet;
}
