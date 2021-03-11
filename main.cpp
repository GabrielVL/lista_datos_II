#include <iostream>
#include "src/List.h"
#include "src/Collector.h"

int main() {
    bool memory = true;
    Collector *collector = new Collector;
    List *list = new List;
    list->addFirst(3);
    list->print(memory);
    list->addFirst(4);
    list->print(memory);
    list->removeFirst();
    list->print(memory);
    list->addFirst(5);
    list->print(memory);
    return 0;
}
