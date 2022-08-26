#include <iostream>

int main()
{
    int number = 1;
    while (number != 0){
        std::cout << "Type a number: " << std::endl;
        std::cin >> number;
        
        if (number == 0) {
            break;
        }
        
        if (number % 2 == 0) {
            std::cout << "It is an even number" << std::endl;
        }
        else {
            std::cout << "It is an uneven number" << std::endl;
        }
    }

    system("pause>0");
}

