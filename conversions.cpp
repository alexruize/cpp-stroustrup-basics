#include <iostream>

int main() {
    char c = 'y';
    int i1 = c;
    std::cout << c << " is " << i1 << std::endl; // prints 120 (ASCII), char is PROMOTED to int

    // Promotions => widening
    // Demotions => narrowing
    return 0;
}