#include <iostream>
#include <array>

int main()
{
    std::array<float, 5> num;
    float sum = 0;

    std::cout << "Enter " << num.size() << " numbers: ";
    for (std::size_t i = 0; i < num.size(); ++i)
    {
        std::cin >> num[i];
        sum += num[i];
    }

    std::cout << "The sum of the numbers is: " << sum << std::endl;
    return 0;
}