#include <iostream>
#include "src/List.h"

int main() {
    List *list = new List;
    list->add(3);
    std::cout << list->getHead()->getData() << std::endl;
    list->add(4);
    std::cout << list->getHead()->getData() << std::endl;
    std::cout << list->getHead()->getNext()->getData() << std::endl;
    return 0;
}
