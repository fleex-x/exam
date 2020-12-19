#include <iostream>

int main() {
    int a, b, c = 10;
    std::cout << (a = (b = c)) << std::endl;
    std::cout << a << " " << b << " " << c << std::endl; 
    return 0;
}

