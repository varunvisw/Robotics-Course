#include <iostream>

int main()
{
    int num;
    int sum = 0;

    std::cout << "Enter a number: ";
    if (!(std::cin >> num)) 
    {
        std::cout << "That's not a valid number.\n";
        return 1;
    }

    if (num < 0) 
    {
        num = -num;          // To remove the negative sign if the number is negative
    }

    while (num != 0) {
        sum += num % 10;     // To take the last digit and add it
        num /= 10;           // To remove the last digit
    }

    std::cout << "The sum of the digits is " << sum << std::endl;
    return 0;
}