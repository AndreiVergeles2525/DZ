#include <iostream>

int main() {
    int a;
    int b;
    char c;
    std::cout << "Напишите первое число: ";
    std::cin >> a;
    if (!std::cin) {
        std::cout << "Это не цифра брад, меняй" << std::endl;
        return 0;
    }
    std::cout << "Напишите второе число: ";
    std::cin >> b;
    if (!std::cin) {
        std::cout << "Это не цифра брад, меняй" << std::endl;
        return 0;
    }
    std::cout << "Вибери чо хош сделать + - * / %: ";
    std::cin >> c;

    switch (c)
    {
        case '+':
        {
            std::cout << "ашалеть и это будет " << a + b << std::endl;
        }
        break;
        
        case '-':
        {
            std::cout << "ашалеть и это будет: " << a - b << std::endl;
        }
        break;

        case '*':
        {
           std::cout << "ашалеть и это будет: " << a * b << std::endl;
        }
        break;

        case '/':
        {
            std::cout << "ашалеть и это будет: " << a / b << std::endl;
        }
        break;

        case '%':
        {
            std::cout << "ашалеть и это будет: " << a % b << std::endl;
        }
        break;

        default:
        {
            std::cout << "Ты ошибся брадок" << std::endl;
        }
    }
}