#include <iostream>
   
int main()
{
    int num1,num2,num3;

    std::cout << "Enter the three numbers separeted by space :";
    std::cin >> num1 >> num2 >> num3;

    std::cout << "You entered : " << num1 << "," << num2 << "," << num3 << std::endl;

    return 0;
}