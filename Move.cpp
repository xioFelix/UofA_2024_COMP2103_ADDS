#include "Move.h"

Move::Move(){
    moveName=" ";
}

std::string Move::getName(){
    std::cout<< "Enter move: ";
    std::cin >> moveName;
    return moveName;
}