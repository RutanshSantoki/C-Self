// Checking if year is leap or not 

// leap year examples : 2000,2004,2008

//leap year condition is that is divided by 4 and not divided by 100

#include <iostream>

int main()
{
    int year;

    //taking output

    std::cout << "Enter the year :" << std::endl;
    std::cin >> year;

    if(year % 4 ==0 && year % 100 !=0)
    {
        std::cout << year << "is a leap year !" << std::endl;
    }
    else
    {
        std::cout << year << " is not a leap year !" << std::endl;
    }

    return 0;
    
}