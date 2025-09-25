#include <iostream>

int main() {
    int a, b;
    std::cout << "One number: ";
    std::cin >> a;
    std::cout << "Two number: ";
    std::cin >> b;
    int sum = 0;
    int i = a;
    while (i <= b) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    std::cout << "Сумма: " << sum;
}