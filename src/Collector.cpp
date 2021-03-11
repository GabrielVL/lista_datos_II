//
// Created by mavros on 9/3/21.
//

#include "Collector.h"

void Collector::addBin(Node mem_block) {

    recycle_bin.add(mem_block.getData());
    recycle_bin.setHead(&mem_block);

}

const List &Collector::getRecycleBin() const {
    return recycle_bin;
}

void Collector::setRecycleBin(const List &recycleBin) {
    recycle_bin = recycleBin;
}
