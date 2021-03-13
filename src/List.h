//
// Created by mavros on 9/3/21.
//

#ifndef LISTA_DATOS_II_LIST_H
#define LISTA_DATOS_II_LIST_H


#include "Node.h"

/// Ordena, almacena y organiza nodos uno detrás de otro
class List {

private:
    Node *head = nullptr;

public:
    void addFirst(int data);

    void removeFirst();

    void print(bool is_memory);

    Node *getHead() const;

    void setHead(Node *head);


};


#endif //LISTA_DATOS_II_LIST_H
