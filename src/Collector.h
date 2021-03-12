//
// Created by mavros on 9/3/21.
//

#ifndef LISTA_DATOS_II_COLLECTOR_H
#define LISTA_DATOS_II_COLLECTOR_H


#include "Node_Collector.h"

class Collector {

private:
    Node_Collector *head = nullptr;

protected:

    Collector() {
        head = nullptr;
    }

    static Collector* instance;


public:
    Collector(Collector &other) = delete;

    void operator=(const Collector &) = delete;

    Node_Collector *getHead() const;

    void setHead(Node_Collector *head);

    static Collector *GetInstance();

    void addFirst(void *value);

    Node_Collector * removeFirst();

    void print();

};


#endif //LISTA_DATOS_II_COLLECTOR_H
