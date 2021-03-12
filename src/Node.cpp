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
    void *mem_node = nullptr;
    std::cout << "Overload a operador new" << std::endl;
    if (collector->getHead() == nullptr) {
        mem_node = reinterpret_cast<void *>(::new Node());
        std::cout << "Collector vacío. Se crea nuevo espacio en memoria 0x" << std::uppercase << std::hex;
        std::cout << uintptr_t(mem_node) << std::endl;
        collector->print();
    } else {
        mem_node = collector->removeFirst();
        std::cout << "Se reutiliza 0x" << std::uppercase << std::hex << uintptr_t(mem_node);
        std::cout << " con la ayuda de Collector" << std::endl;
        collector->print();
    }
    std::cout << std::endl;
    return mem_node;
}

void Node::operator delete(void *save_mem) {
    std::cout << "Overload a operador delete" << std::endl;
    std::cout << "Se agrega 0x" << std::uppercase << std::hex << uintptr_t(save_mem) << " al Collector" << std::endl;
    Collector *collector = Collector::GetInstance();
    collector->addFirst(save_mem);
    collector->print();
    std::cout << std::endl;
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
