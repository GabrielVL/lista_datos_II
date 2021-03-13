//
// Created by mavros on 8/3/21.
//

#ifndef LISTA_DATOS_II_NODE_H
#define LISTA_DATOS_II_NODE_H

/// Objetos almacenados en una lista que guardan información
class Node {

private:
    int data{};

private:
    Node *next{};

public:
    Node();

    explicit Node(int data);

    void* operator new(size_t size);

    void operator delete(void*);

    int getData() const;

    void setData(int data);

    Node *getNext() const;

    void setNext(Node *next);


};


#endif //LISTA_DATOS_II_NODE_H
