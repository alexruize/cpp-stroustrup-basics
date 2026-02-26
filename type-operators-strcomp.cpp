#include <iostream>


int main(){

    std::string name1; 
    std::string name2;
    
    std::cout << "Write two names: ";
    std::cin >> name1 >> name2;

    if (name1 == name2) {
        std::cout << "Both names the same";
    } else if (name1 < name2) { // Type defines specific function of (binary) operators.
        std::cout << name1 << " goes before " << name2;
    } else {
        std::cout << name2 << " goes before " << name1 << "\n";
    }

    return 0;
}