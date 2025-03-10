#include<iostream>

int perimeter(int x,int y,int z);
void perimeter(int x);
int perimeter(int x,int y);

using namespace std;

int main()
{
    int p,q,r;
    int a,ans;
    int l,b;

    //Doing for Triangle
    cout<<"Enter Three Sides Of Triangles: ";
    cin>>p>>q>>r;

    cout<< "P= "<<p<<"Q= "<<"R= "<<r;
    ans=perimeter(p,q,r);
    cout<<"Perimeter of given Triangle is: "<<ans;


    //Doing for Square
    cout<<"Enter a side of square: ";
    cin>>a;
    cout<<"A = "<<a;
    perimeter(a);

    //Doing for Rectangle
    cout<<"Enter Two Sides of Rectangle : ";
    cin>>l>>b;
    cout<<"l= "<<l<<"   "<<"b=  "<<b;
    ans=perimeter(l,b);
    cout<<"Perimeter Of Given Rectangle : "<<ans;


    return 0;
}

int perimeter(int x,int y, int z)
{
    return(x+y+z);

}

void perimeter(int x);
{
    int ans;
    ans=4*x;
    cout<<"Perimeter of given square is : "<<ans;
}

int perimeter(int x,int y)
{
    return((2*x)+(2*y));
}

