#include <iostream>
#include <cmath>


float areaCircle(float r){
    return M_PI * std::pow(r, 2.0);
}

int main(){
    float r;

    std::cout << "Radius?" << std::endl; 
    std::cin >> r;

    float area_c = areaCircle(r); 
    std::cout << "Are of circle is " << area_c << std::endl; 

    return 0;
}