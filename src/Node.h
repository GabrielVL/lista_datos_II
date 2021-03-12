//
// Created by mavros on 8/3/21.
//

#ifndef LISTA_DATOS_II_NODE_H
#define LISTA_DATOS_II_NODE_H


class Node {

private:
    int data;
    void *mem;
    Node *next;
public:
    Node(int data);

    Node(void *mem);

    void* operator new(size_t size);

    void operator delete(void*);

    int getData() const;

    void setData(int data);

    Node *getNext() const;

    void setNext(Node *next);


};


#endif //LISTA_DATOS_II_NODE_H
