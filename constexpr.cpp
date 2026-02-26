#include <iostream>

int main() {
    constexpr double pi = 3.1415926535; // KNOWN at compile time but immutable.

    double x;
    std::cout << "Input a double to assign to x: \n";
    std::cin >> x;
    
    const double y = x; // NOT KNOWN at compile time but immutable once assigned.

    std::cout << "constexpr PI: " << pi << " is KNOWN at compilation time, and cannot be changed\n";
    std::cout << "const y: " << pi << "is NOT KNOWN at compilation time, and also cannot be changed\n";

    return 0;
}