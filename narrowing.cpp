#include <iostream>

int main() {

    double d = 0;
    while (std::cin >> d) { // Try 1233.213, -123, 37000.956324098563045
        int i = d;
        char c = i;
        std::cout << "#########\nd==" << d
                  << " i==" << i
                  << " c==" << c
                  << " char(" << c << ")\n########\n";
    }
    return 0;
}