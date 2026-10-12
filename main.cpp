#include <iostream>

int main() {
    int a, b;
    std::cout << "Введите первое целое число: ";
    std::cin >> a;
    std::cout << "Введите второе целое число: ";
    std::cin >> b;
    std::cout << "Числа: " << a << " и " << b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    return 0;
}
