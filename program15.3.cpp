#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1("ABC");
    string s2("XYZ");
    string s3=s1+s2;

    // This is conditional part 
    if(s1 != s2)
        cout << s1 << " is not equal to " << s2 << "\n";

    if(s1>s2) // Here it measures the aascai value of a and x and then compare it 
        cout <<s1 << " is greater than " << s2 << "\n";
    else
        cout <<s2 << " greater than " << s1 << "\n";


    if(s3==s1+s2)
        cout << s3 << " is equal to " << s1+s2 << "\n";


    // Comparing part start here
    int x=s1.compare(s2);

    if(x==0)
        cout << s1 << "=" << s2 << "\n";

    else if(x>0)
        cout << s1 << ">" << s2 << "\n";

        else 
            cout << s1 << "<" << s2 << "\n";


            return 0;


}