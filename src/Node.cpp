//
// Created by mavros on 8/3/21.
//

#include <iostream>
#include "Node.h"
#include "Collector.h"

Node::Node() = default;

Node::Node(int data) : data(data) {}

void *Node::operator new(size_t size) {
    Collector *collector = Collector::GetInstance();
    if (collector->getHead() == nullptr) {
        void* *mem_node = reinterpret_cast<void **>(::new Node());
        return mem_node;
    } else {
        return collector->removeFirst();
    }
}

void Node::operator delete(void *save_mem) {
    Collector *collector = Collector::GetInstance();
    collector->addFirst(save_mem);
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
