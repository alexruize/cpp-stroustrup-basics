#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){

    std::srand(std::time(0)); // Set seed for rand() using time for changing vals, returns void.
    std::cout << "A random number in range [0," << RAND_MAX << "]:" << rand() << std::endl;
    
    std::cout << "Remap to [0, 256]: " << rand() % 257 << std::endl; // zero-based obvs

    return 0;
}
