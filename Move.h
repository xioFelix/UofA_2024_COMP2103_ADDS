#ifndef MOVE_H
#define MOVE_H
#include <iostream>

class Move {
 protected:
  std::string NameOfMove = " ";
  float id;

 public:
  Move();
  Move(std::string _input);
  virtual void setMove(std::string change_);
  virtual std::string getName();
  virtual float getid();
  virtual Move* Judge(Move* compare);
  ~Move();
};

#endif