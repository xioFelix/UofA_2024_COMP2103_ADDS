#include "Node.h"

Node::Node(int val)
{
    data = val;
    link = nullptr;
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
    link = nextnode;
}

Node* Node::getNext()
{
    return link;
}

Node::~Node()
{

}