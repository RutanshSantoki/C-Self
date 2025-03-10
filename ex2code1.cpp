#include <iostream>
using namespace std;

// Call by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a = " << a << ", b = " << b << endl;
}

// Call by Reference using Pointers
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by Reference using Reference Variables
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    
    // Call by Value
    cout << "Before swapByValue: x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << " (No change)" << endl;

    // Call by Reference using Pointers
    cout << "\nBefore swapByPointer: x = " << x << ", y = " << y << endl;
    swapByPointer(&x, &y);
    cout << "After swapByPointer: x = " << x << ", y = " << y << " (Values swapped)" << endl;

    // Call by Reference using Reference Variables
    cout << "\nBefore swapByReference: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << " (Values swapped again)" << endl;
    
    return 0;
}