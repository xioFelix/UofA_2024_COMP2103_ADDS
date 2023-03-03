#include "Player.h"

Player::Player(std::string name) {
    this->name = name;
}

std::string Player::getName() {
    return name;
}