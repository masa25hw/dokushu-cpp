#include <iostream>
#include <string>

int main()
{
    std::string line;
    
    // Question1
    // double i;
    // std::cout << "Type real number..." << std::endl;
    // std::cin >> i;
    // std::cout << "Input value is \"" << i << "\"" <<  std::endl;

    // Question2
    // std::cout << "Type string..." << std::endl;
    // std::getline(std::cin, line);
    // std::cout << "Input string is \"" << line << "\"" <<  std::endl;

    // Question3

    do{
        std::cout << "> ";
        std::getline(std::cin, line);
        std::cout << "Input string is \"" << line << "\"" <<  std::endl;
    }while (line != "");

    std::cout << "This process completed successfully." << std::endl;
    
}
