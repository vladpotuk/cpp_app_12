#include <iostream>
#include<Windows.h>

int main() {
    int number;
    system("chcp 1251");
    system("cls");
    std::cout << "Введіть число: ";
    std::cin >> number;

  
    if (number % 2 == 0) {
        std::cout << "Число " << number << " є парним." << std::endl;
    }
    else {
        std::cout << "Число " << number << " є непарним." << std::endl;
    }

    return 0;
}





