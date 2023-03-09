#include <iostream>
#include "Human.h"

Human::Human(std::string name) : nameGet(name) {}

char Human::makeMove() {
    std::cout << "Enter move: ";
    char move;
    std::cin >> move;
    return move;
}

std::string Human::getName() {
    return nameGet;
}
