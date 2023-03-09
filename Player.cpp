#include "Player.h"

Player::Player(){}

Player::Player(std::string name) {
    this->name = name;
}

char Player::makeMove(){}

std::string Player::getName() {
    return name;
}