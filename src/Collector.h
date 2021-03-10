//
// Created by mavros on 9/3/21.
//

#ifndef LISTA_DATOS_II_COLLECTOR_H
#define LISTA_DATOS_II_COLLECTOR_H


#include "List.h"

class Collector {

private:
    List recycle_bin;
public:
    const List &getRecycleBin() const;

    void setRecycleBin(const List &recycleBin);

};


#endif //LISTA_DATOS_II_COLLECTOR_H
