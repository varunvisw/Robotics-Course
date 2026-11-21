#include <iostream>

int main()
{
    int num;
    int reversed = 0;
    std::cout << "Enter a number: ";
    if (!(std::cin >> num)) {
        std::cout << "That's not a valid number.\n";
        return 1;
    }

   int num1 = num; // To store the original number
    for(reversed =0; num!=0; num/=10)
    {
        reversed = reversed * 10 + num%10;
    }
    if(reversed == num1) {
        std::cout << "The number is a palindrome.\n";
    } else {
        std::cout << "The number is not a palindrome.\n";
    }
    return 0;
}