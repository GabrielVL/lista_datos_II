//
// Created by mavros on 8/3/21.
//

#ifndef LISTA_DATOS_II_NODE_H
#define LISTA_DATOS_II_NODE_H


class Node {

private:
    int data;
    int *next;

public:
    Node(int data, int *next);

    void SetNode(int data, int *next);

};


#endif //LISTA_DATOS_II_NODE_H
