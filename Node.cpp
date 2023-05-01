#include "Node.h"

Node::Node(int val)
{
    data = val;
    text = nullptr;
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
    text = nextnode;
}

Node* Node::getNext()
{
    return text;
}

Node::~Node()
{

}