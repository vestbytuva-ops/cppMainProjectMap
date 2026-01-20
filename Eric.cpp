#include <iostream>

void doubleNumber(){
    int value {};
    std::cin >> value ;
    std::cout << "double that number is: " << value*2 << '\n' ;
}

int main(){
    std::cout << "Enter an integer:" << '\n' ;
    doubleNumber();

    return 0;
}

