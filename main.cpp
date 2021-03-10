#include <iostream>
#include "src/List.h"

int main() {
    List *list = new List;
    list->add(3);
    list->print(0);
    list->add(4);
    list->print(1);
    return 0;
}
