//
// Created by mavros on 9/3/21.
//

#include "Collector.h"

const List &Collector::getRecycleBin() const {
    return recycle_bin;
}

void Collector::setRecycleBin(const List &recycleBin) {
    recycle_bin = recycleBin;
}
