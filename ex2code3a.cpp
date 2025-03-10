#include<iostream>
using namespace std;

inline int fact(int x);

int main()
{
    int n,ans;
    cout<<"Enter The Number You Want A Factorial Of: ";
    cin>>n;

    ans=fact(n);
    
    cout<<"Factorial of Given Number Is= "<<ans;
    return 0;
}

inline int fact(int x)
{
    if(x==1)
        return 1;

        return(x*fact(x-1));
}