//
// Created by mavros on 9/3/21.
//

#include <iostream>
#include "List.h"
void List::add(int data) {
    Node *newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        newNode->setNext(getHead());
        setHead(newNode);
    }
}

void List::print() {

    Node *current = head;
    std::cout << "[";
    while (current != nullptr) {
        std::cout << current->getData();
        if (current->getNext() != nullptr) {
            std::cout << ", ";
        }
        current = current->getNext();
    }
    std::cout << "]" << std::endl;

}

Node *List::getHead() const {
    return head;
}

void List::setHead(Node *head) {
    List::head = head;
}
