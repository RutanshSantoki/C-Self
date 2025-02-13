#include<iostream>
#include<string>

using namespace std;

void display(string str);

{
    cout << "Size = " << str.size() << "\n";
    cout << "Length = " << str.length() << "\n";
    cout << "Capacity = " << str.capacity() << "\n";
    cout << "Maximum Size = " << str.max_size() << "\n";
    cout << "Empty :" << (str.empty() ? "yes" ; "no");

}

    
    


int main()
{

    string str1;

    cout << "Initial Status:" << "\n";
    display(str1);

    cout << "Enter a String (one word) " << "\n";
    cin >> str1;
    cout << "Status Now : " << "\n";
    display(str1);

    str1.resize(15);
    cout << "Status after resizing : " << "\n";
    display(str1);
    cout << "\n";


    return 0;

}