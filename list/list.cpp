#include "Header.h"

int main() {
    list<int> list;
    list.push_back(5);
    list.push_back(6);
    list.push_back(7);
    std::cout << list << std::endl;
    list.pop_back();
    std::cout << list << std::endl;
       
}
