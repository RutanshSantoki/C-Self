#include <iostream>

int main()
{
    int divident, divisor, quotient, remainder;

    std::cout << "Enter Dividend: ";
    std::cin >> divident;

    std::cout << "Enter Divisor: ";
    std::cin >> divisor;

    if (divisor == 0)
    {
        std::cout << "Error! Division by zero is not allowed!" << std::endl;
    }
    else
    {
        quotient = divident / divisor;
        remainder = divident % divisor;

        std::cout << "Quotient is: " << quotient << std::endl;
        std::cout << "Remainder is: " << remainder << std::endl;
    }

    return 0;
}
