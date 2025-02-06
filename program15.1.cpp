#include<iostream>

#include<string>

using namespace std;

int main()
{
    //Creating string objeects

    string s1;
    string s2(" New ");
    string s3(" Delhi ");

    //Assinging values to string objects

    s1=s2;
    cout << "S1 = " << s1 << "\n";

    //using string constant
    s1="Standard C++";
    cout << "Now S1 = " << s1 << "\n";

    //using another object
    string s4(s1);
    cout << "S4 = " << s4 << "\n\n";

    //Reading through keyboard
    cout << "Enter a string \n";
    cin >> s4;
    cout << "Now S4 = " << s4 << "\n";

    //Concatenating strings
    s1=s2+s3;
    cout << "S1 finally contains : " << s1 << "\n";

    return 0;
}