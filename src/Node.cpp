//
// Created by mavros on 8/3/21.
//

#include <iostream>
#include "Node.h"
#include "Collector.h"

Node::Node(int data) : data(data) {}

void *Node::operator new(size_t size) {
    return nullptr;
}

void Node::operator delete(void *) {

}

int Node::getData() const {
    return data;
}

void Node::setData(int data) {
    Node::data = data;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

