#include <iostream>

int main()
{
    int num;
    int digits = 0;

    std::cout << "Enter a number: ";
    if (!(std::cin >> num)) 
    {
        std::cout << "That's not a valid number.\n";
        return 1;
    }

    do {
            num /= 10;
            ++digits;
        }   
    while (num != 0);

    std::cout << "The number of digits is " << digits << std::endl;
    return 0;
}
