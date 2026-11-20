#include <iostream>
#include <string>

int main() {
    std::string input;
    
    while (true) {
        std::cout << "Enter and integer (or 'q' to quit): ";
        std::cin >> input;

        if (input == "q" || input == "Q") {
            break;
        }
    

        int number = std::stoi(input);

        if (number % 2 == 0) {
            std::cout << " is an even number.\n" << std::endl;
        } else {
            std::cout << "is and odd number.\n" << std::endl;
        }
    }
 
 std::cout << "Program ended. " << std::endl;   
    return 0;
}