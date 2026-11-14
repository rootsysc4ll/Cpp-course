#include <iostream>
#include <ostream>
#include <string>
#include <string_view>

std::string getName(int personNumber) {
    std::string name {};

    std::cout << "Enter the name of person #" << personNumber << ": ";
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string_view personName) {
    int age {};
    
    std::cout << "Enter the age of " << personName << ": ";
    std::cin >> std::ws >> age;
    
    return age;
}

void printOlder(int age1, std::string_view name1, int age2, std::string_view name2) {
    if (age1 > age2) {
        std::cout << name1 << "(age " << age1 << ")" << " is older than " << name2 << "(age " << age2 << ")";
    } else if (age1 == age2) {
        std::cout << name1 << " have the same age of " << name2 << "(age " << age1 << ")";
    } 
    else {
        std::cout << name2 << "(age " << age2 << ")" << " is older than " << name1 << "(age " << age1 << ")";
    }
}

int main() {
    const std::string name1 { getName(1) };
    const int age1                { getAge(name1) };
    
    const std::string name2 { getName(2) };
    const int age2          { getAge(name2) };
    
    printOlder(age1, name1, age2, name2);
    
    return 0;
}