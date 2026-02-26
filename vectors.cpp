// Taken from medium.com (TODO exact URL)
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ranges>

int main(){

    // Create vector object
    std::vector<std::string> v{"This", "is", "a", "vector", "of", "strings"};
    
    // Get vector object info
    int v_size = v.size();
    int ix = 3;
    std::string textat = v[3];
    std::string first_el = v.front();
    std::string last_el = v.back();
    bool is_empty = v.empty();
    int max_num = v.max_size();
    int capacity = v.capacity();

    std::cout << "Vector size is " << v_size << std::endl;
    std::cout << "Chosen word is \"" << textat << "\" at index " << ix << std::endl;
    std::cout << "First element is " << first_el << std::endl;
    std::cout << "Last element is " << last_el << std::endl;
    std::cout << "Is vector empty? " << is_empty << std:: endl;
    std::cout << "What is max size? " << max_num << std::endl;
    std::cout << "What is max capacity? " << capacity << std::endl;
    std::cout << std::endl;

    // Iterating over elements
    std::cout << "Iterating with classical for loop: " << std::endl;
    for (int i=0;i<capacity;i++) {
        std::cout << v[i] << std::endl;
    }

    // Using iterables (modern way)
    std::cout << "Iterating with range-based for loop: " << std::endl;
    for (std::string s : v) {
        std::cout << s << std::endl; 
    }

    return 0;
}