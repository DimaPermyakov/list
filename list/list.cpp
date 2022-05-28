#include "Header.h"

int main() {
    list<int> list;
    list.push_back(5);
    list.push_back(6);
    list.push_back(7);
    for (size_t i = 0; i != list.size(); ++i)
        std::cout << list[i] << std::endl;

    list.pop_back();

    std::cout << "====" << std::endl;
    for (size_t i = 0; i != list.size(); ++i)
        std::cout << list[i] << std::endl;
}
