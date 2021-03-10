#include <iostream>
#include "src/List.h"

int main() {
    List *list = new List;
    list->add(3);
    std::cout << list->getHead() << std::endl;
    list->add(4);
    std::cout << list->getHead() << std::endl;
    std::cout << list->getHead()->getNext() << std::endl;
    return 0;
}
