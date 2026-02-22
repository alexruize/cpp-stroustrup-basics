#include <iostream>


float fahrToCelsius(float f){
    return (f - 32) * 5/9;
}

int main() {
    std::cout << "Enter a temp in Fahrenheit to get Celsius: "; 
    
    float f;
    std::cin >> f;
    
    float c = fahrToCelsius(f);
    std::cout << f << " Fahrenheit is " << c << " Celsius" << std::endl; 

    // std::cout << "Celsius here is float: " << std::is_floating_point(c) << std::endl;
    
    return 0;
}