//
// Created by mavros on 9/3/21.
//

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

Node *List::getHead() const {
    return head;
}

void List::setHead(Node *head) {
    List::head = head;
}
