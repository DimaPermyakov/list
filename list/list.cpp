#include "Header.h"
#include "message.h"
#include <Windows.h>

void ReadList(const list<message>& info);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    message info_1("89168559942", "Здравствуйте ваше величество, Ваш код великолепен как всегда");
    message info_2("8916777777", "Здарова Стэээээс, поздравь пж Сослана с др");
    
    list<message> list;
    list.push_back(info_1);
    list.push_back(info_2);
    ReadList(list);
    return 0;
}
void ReadList(const list<message>& info) {
    for (size_t i = 0; i < info.size(); ++i) {
        std::cout << "===Вышка #" << i+1 << std::endl;
        std::cout << info[i].GetNumber() << std::endl;
        std::cout << info[i].GetText() << std::endl;
        std::cout << std::endl;
    }
}
