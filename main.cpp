#include <iostream>
#include<Windows.h>

int main() {
    int number;
    system("chcp 1251");
    system("cls");
    std::cout << "������ �����: ";
    std::cin >> number;

  
    if (number % 2 == 0) {
        std::cout << "����� " << number << " � ������." << std::endl;
    }
    else {
        std::cout << "����� " << number << " � ��������." << std::endl;
    }

    return 0;
}





