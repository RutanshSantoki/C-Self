#include <iostream>
using namespace std;

// Inline function to calculate the cube of a number
inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "Cube of " << num << " is: " << cube(num) << endl;
    
    return 0;
}
