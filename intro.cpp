#include <iostream>

int main()
{
    int a,b;
    char c;
    std::cout << "Enter the first number : ";
    std::cin >> a;
    std::cout << "Enter the second number : ";
    std::cin >> b;
    std::cout << "Enter the operation  (+,-,/,*) : ";
    std::cin >> c;


    switch (c)
    {
    case '+':
        std::cout << "a + b = " << a+b;
        break;
    case '-':
        std::cout << "a - b = " << a-b;
        break;
    case '/':
        std::cout << "a / b = " << a/b;
        break;
    case '*':
        std::cout << "a * b = " << a*b;
        break;
    
    
    default:
        std::cout << "Invalid Input!";
        break;
    }
    return 0;


    //switch with initialiser