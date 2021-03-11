//
// Created by mavros on 8/3/21.
//

#include <iostream>
#include "Node.h"
#include "Collector.h"

Node::Node(int data) : data(data) {}

Node::Node(void *mem) : mem(mem) {}

void* operator new(size_t size, Collector recycle_bin) {



}

void operator delete(void* recycle, Collector recycle_bin) {

    recycle_bin.addBin(recycle);

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
