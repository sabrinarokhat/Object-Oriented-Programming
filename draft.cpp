#include <iostream>

namespace space {
    void greet() {
        std::cout << "Hello World!\n";
    }

    void multiplication(int a, int b) {
        std::cout << a * b << "\n";
    }
}

int main() {
    space::greet();

    int a;
    int b;

    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    space::multiplication(a, b);

    return 0;
}
