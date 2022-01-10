#include "Header.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    bool temp = true;
    std::string text = "";
    std::cout << "Введите строку: ";
    std::getline(std::cin, text);
    char* cstr = new char[text.length() + 1];
    strcpy(cstr, text.c_str());
    std::string result = get_new_str(cstr, temp);
    delete[] cstr;
    std::cout << "Результат преобразования: " << result << std::endl;
    if (temp) {
        std::cout << "В результате преобразования получена анологичная строка" << std::endl;
    }
    else {
        std::cout << "В результате преобразования получена другая строка" << std::endl;
    }
}
