#include <iostream>

int f(int);

int main() {
    
    int i =7;
    std::cout << f(i) << '\n'; //Compiles but: link-error: undefined reference to `f(int)'
    
    return 0;
}