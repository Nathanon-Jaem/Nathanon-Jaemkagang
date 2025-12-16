#include <iostream>

int main() {
    int a = 20; 
    int b = 30;
    int c = 4; 
    double output; 

    output = a - (double)b / c; 
    
    std::cout << "output: " << output << "\n"; 
    return 0;
}
