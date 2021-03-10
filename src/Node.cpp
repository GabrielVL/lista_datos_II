//
// Created by mavros on 8/3/21.
//

#include <iostream>
#include "Node.h"
#include "Collector.h"

Node::Node(int data)
: data(data) {}

void* operator new(size_t size, List recycle_bin) {



}

void operator delete(void* recycle, List recycle_bin) {



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
