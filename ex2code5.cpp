#include <iostream>
using namespace std;

// Function overloading for print() function
void print(int x) {
    cout << "Integer value: " << x << endl;
}

void print(float x) {
    cout << "Float value: " << x << endl;
}

void print(double x) {
    cout << "Double value: " << x << endl;
}

void print(char x) {
    cout << "Character value: " << x << endl;
}

void print(string x) {
    cout << "String value: " << x << endl;
}

int main() {
    int a = 10;
    float b = 5.5f;
    double c = 15.1234;
    char d = 'A';
    string e = "Hello World";

    // Calling overloaded print() functions
    print(a);
    print(b);
    print(c);
    print(d);
    print(e);

    return 0;
}
