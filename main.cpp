#include <iostream>
#include "src/List.h"

int main() {
    List *list = new List;
    list->add(3);
    list->print();
    list->add(4);
    list->print();
    return 0;
}
