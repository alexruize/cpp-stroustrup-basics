#include <iostream>
#include <string>


int main(){

    std::string s1 = "string1address1";
    std::cout << "s1: " << s1 << std::endl;

    std::string *pointer1 = &s1; // * dereferences for assignment, & invokes address of s1
    std::cout << "pointer1 address:" << pointer1 << std::endl;
    std::cout << "pointer1 content:" << *pointer1 << std::endl;

    int anArray[4] = {0,1,2,3};

    std::cout << "Printing an array is just the address: " << anArray << std::endl;
    std::cout << "To print array, dereference for first value: " << *anArray << std::endl;
    std::cout << "Or access array: " << anArray[2] << std::endl;

    return 0;
}