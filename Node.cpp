#include "Node.h"

Node::Node(int val)
{
    data = val;
    next = nullptr;
}

void Node::setValue(int val)
{
    data = val;
}

int Node::getValue()
{
    return data;
}

void Node::setNext(Node* nextnode)
{
    next = nextnode;
}

Node* Node::getNext()
{
    return next;
}

Node::~Node()
{

}