//
// Created by mavros on 9/3/21.
//

#include <iostream>
#include "Collector.h"


Collector *Collector::GetInstance() {
    if(instance == nullptr){
        instance = new Collector();
    }
    return instance;
}

void Collector::addFirst(void* mem) {
    auto *newNode = new Node_Collector(mem);
    if (head->getMem() == nullptr) {
        setHead(newNode);
    } else {
        newNode->setNext(head);
        setHead(newNode);
    }
}

Node_Collector *Collector::removeFirst() {
    if (head->getMem() != nullptr) {
        Node_Collector *node = head;
        setHead(head->getNext());
        return node;
    } else {
        return nullptr;
    }
}

void Collector::print() {

    Node_Collector current_node = head;
    std::cout << "[";
    while (current_node.getMem() != nullptr) {
        std::cout << current_node.getMem();
        if (current_node.getNext() != nullptr) {
            std::cout << ", ";
        }
        current_node = current_node.getNext();
    }
    std::cout << "]" << std::endl;

}

Node_Collector *Collector::getHead() const {
    return head;
}

void Collector::setHead(Node_Collector *head) {
    Collector::head = head;
}


