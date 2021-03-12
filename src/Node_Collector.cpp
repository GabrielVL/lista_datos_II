//
// Created by mavros on 11/3/21.
//

#include "Node_Collector.h"

Node_Collector::Node_Collector(void *mem) : mem(mem) {}

void *Node_Collector::getMem() const {
    return mem;
}

void Node_Collector::setMem(void *mem) {
    Node_Collector::mem = mem;
}

Node_Collector *Node_Collector::getNext() const {
    return next;
}

void Node_Collector::setNext(Node_Collector *next) {
    Node_Collector::next = next;
}
