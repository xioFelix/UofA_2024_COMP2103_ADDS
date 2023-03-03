#include <iostream>
#include "human.h"

Human::Human(std::string name) : name_Get(name) {}

char Human::makeMove() {
    std::cout << "Enter move: ";
    char move;
    std::cin >> move;
    return move;
}

std::string Human::getName() {
    return name_Get;
}
