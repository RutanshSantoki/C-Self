#include <iostream>

int main()
{
    int num1,num2;

    std::cout << "Number 1 is:" << std::endl;
    std::cin >> num1;

    std::cout << "Number 2 is:" << std::endl;
    std::cin >> num2;

    //Displaying numbers before swapping 

    std::cout << "Before Swapping:" << std::endl;
    std::cout << "Number 1 = " << num1 << "         Number 2 = " << num2 << std::endl;

    //swapping the number
    num1= num1 + num2;
    num2= num1 - num2;
    num1= num1 - num2;

    //Displaying numbers after swapping

    std::cout << "After Swapping:" << std::endl;
    std::cout << "Number 1 = " << num1 << "         Number 2 = " << num2 << std::endl;


    return 0;

}