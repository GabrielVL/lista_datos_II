//
// Created by mavros on 9/3/21.
//

#include <iostream>
#include "List.h"

/// Añade un nodo al principio de la lista
/// \param data Nodo con int a añadir
void List::addFirst(int data) {
    Node *newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        newNode->setNext(getHead());
        setHead(newNode);
    }
    std::cout << "Se añade " << data << " a la lista ";
    std::cout << "(0x" << std::uppercase << std::hex << uintptr_t(newNode)<< " en memoria)" << std::endl;
    print(false);
    print(true);
    std::cout << std::endl;
}

/// Borra un nodo al principio de la lista
void List::removeFirst() {
    if (head != nullptr) {
        Node *node = head;
        setHead(head->getNext());
        std::cout << "Se remueve " << node->getData() << " a la lista ";
        std::cout << "(0x" << std::uppercase << std::hex << uintptr_t(node)<< " en memoria)" << std::endl;
        print(false);
        print(true);
        std::cout << std::endl;
        delete node;
    }
}

/// Imprime el contenido en la lista
/// \param is_memory Imprime los bloques de memoria de los nodos si es verdadero, el int que contiene el nodo si es
/// falso
void List::print(bool is_memory) {

    Node *current_node = head;
    std::cout << "Estado de la lista ";
    if (is_memory) {
        std::cout << "(en memoria)";
    } else {
        std::cout << "(en int)";
    }
    std::cout << ": [";
    while (current_node != nullptr) {
        if (is_memory) {
            std::cout << "0x" << std::uppercase << std::hex << uintptr_t(current_node);
        } else {
            std::cout << current_node->getData();
        }
        if (current_node->getNext() != nullptr) {
            std::cout << ", ";
        }
        current_node = current_node->getNext();
    }
    std::cout << "]" << std::endl;

}

Node *List::getHead() const {
    return head;
}

void List::setHead(Node *head) {
    List::head = head;
}
