#include <iostream>

int main()
{
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "The reversed number is: ";

    if (num == 0) {
        std::cout << 0;
    }
    if (num < 0) {
        std::cout << '-';
        num = -num;
    }

    while (num != 0)
    {
        std::cout << num % 10;   
        num /= 10;
    }

    std::cout << std::endl;
    return 0;
}
