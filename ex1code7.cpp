// finding the maximum numbers among the three numbers given by the user 

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Taking input
    cout << "Enter Number 1: ";
    cin >> num1;

    cout << "Enter Number 2: ";
    cin >> num2;

    cout << "Enter Number 3: ";
    cin >> num3;

    // Determine the maximum value
    int maxval = num1;  // Assume num1 is the maximum

    if (num2 > maxval) {
        maxval = num2;  // Update maxval if num2 is larger
    }
    if (num3 > maxval) {
        maxval = num3;  // Update maxval if num3 is larger
    }

    // Display the maximum value
    cout << "Maximum Value is: " << maxval << endl;

    return 0;
}

