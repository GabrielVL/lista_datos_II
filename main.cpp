#include <iostream>
#include "src/List.h"
#include "src/Collector.h"

int main() {

    List *list = new List;

    list->addFirst(1);

    list->addFirst(2);

    list->removeFirst();

    list->addFirst(3);

    list->addFirst(4);

    list->removeFirst();

    list->addFirst(5);

    return 0;
}
