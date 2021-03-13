//
// Created by mavros on 11/3/21.
//

#ifndef LISTA_DATOS_II_NODE_COLLECTOR_H
#define LISTA_DATOS_II_NODE_COLLECTOR_H

/// Nodos del Collector que almacenan bloques de memoria
class Node_Collector {

private:
    void *mem;
    Node_Collector *next{};

public:
    Node_Collector(void *mem);

    void *getMem() const;

    void setMem(void *mem);

    Node_Collector *getNext() const;

    void setNext(Node_Collector *next);
};


#endif //LISTA_DATOS_II_NODE_COLLECTOR_H
