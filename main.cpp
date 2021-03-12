#include <iostream>
#include "src/List.h"
#include "src/Collector.h"

int main() {
    bool memory = true;
    Collector *collector = Collector::GetInstance();
    List *list = new List;
    list->addFirst(3);
    list->print(memory);
    list->addFirst(4);
    list->print(memory);
    list->addFirst(4);
    list->print(memory);
    collector->print();
    list->addFirst(4);
    list->print(memory);
    list->addFirst(4);
    list->print(memory);
    list->addFirst(4);
    list->print(memory);
    list->addFirst(4);
    list->print(memory);
    list->addFirst(4);
    list->print(memory);
    list->removeFirst();
    list->removeFirst();
    collector->print();
    list->removeFirst();
    collector->print();
    list->print(memory);
    list->addFirst(5);
    list->print(memory);
    collector->print();
    list->addFirst(6);
    list->print(memory);

    return 0;
}
