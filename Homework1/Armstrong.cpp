#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // To count the digits
    int digits = 0;
    for (int temp = num; temp != 0; temp /= 10)
        ++digits;

    // To add up each digit raised to the power of no. of digits
    int sum = 0;
    for (int temp = num; temp != 0; temp /= 10)
    {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; ++i)
            power *= digit;
        sum += power;
    }

    if (sum == num)
        std::cout << "Armstrong number\n";
    else
        std::cout << "Not an Armstrong number\n";

    return 0;
}