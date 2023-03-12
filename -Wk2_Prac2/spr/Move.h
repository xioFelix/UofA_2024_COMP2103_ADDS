#ifndef MOVE_H
#define MOVE_H
#include <iostream>

class Move {
 protected:
  std::string NameOfMove = " ";
  float id;

 public:
  Move(/* args */);
  Move(std::string _input);
  virtual void setMove(std::string change_);
  virtual std::string getName();
  // returns the name of a Move instance, for example
  // "Ninja".  This function exists purely so I can do some
  // tests.  I don't expect you to call it in your code other
  // than while testing.string getName(); // returns the name
  // of a Move instance, for example "Ninja".  This function
  // exists purely so I can do some tests.  I don't expect
  // you to call it in your code other than while testing.
  virtual int getid();
  virtual Move* WinOrLoss(Move* compare);
  ~Move();
};

#endif