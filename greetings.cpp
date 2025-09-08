#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Hi there!" << std::endl;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Welcome, " << name << "!" << std::endl;
    return 0;
}

