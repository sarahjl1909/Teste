#include <iostream>
#include <string>

int main() {
    std::string palavra;
    
    std::getline(std::cin, palavra);
    
    for(int i = palavra.size() - 1; i >= 0; i--) {
        std::cout << palavra[i];
    }
 
    return 0;
}