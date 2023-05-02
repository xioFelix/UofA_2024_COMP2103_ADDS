#ifndef NODE_H
#define NODE_H

class Node
{
 public:
  Node(int);

  void setValue(int);
  int getValue();

  void setNext(Node*);
  Node* getNext();

  ~Node();

 private:
  int data;
  Node* link;
};
#endif