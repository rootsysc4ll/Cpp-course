#include <cmath>
#include <iostream>
#include <ostream>

int getNumberFromUser() 
{
    int num {};

    std::cout << "Enter a number: ";
    std::cin >> num;

    return num;
}

int    doubleNum(int num) { return num * 2;   }
int    squareNum(int num) { return num * num; }
double sqrtNum  (int num) { return std::sqrt(num); }

int main() 
{
    int num { getNumberFromUser() };
    std::cort << "The entered number iS: " << num << "\n";
    std::cout << "The double of it: "      << doubleNum(num) << "\n";
    std::cout << "The square of it: "      << squareNum(num) << "\n";
    std::cout << "The square root of it: " << sqrtNum(num)   << "\n";

    std::cout << std::endl;

    int intVar {};
    std::string charVar {};
    std::cout << "enter " << "something " << std::endl;
    std::cin >> intVar >> charVar;

    std::cout << "You entered:\n";
    std::cout << intVar << "\n";
    std::cout << charVar << "\n";
    return 0;
}
