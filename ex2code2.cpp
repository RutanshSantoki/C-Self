#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str1[30],str2[30];
    int i;

    cout << "Enter Any String:";
    cin>>str1;

    for(i=0;i<=strlen(str1);i++)
    {
        if(str1[i]>='A'  &&  str1[i]<='Z')
            str2[i]=str1[i]+32;

                else if (str1[i]>='a'  && str1[i]<='z')
                    str2[i]=str1[i]-32;

                    else 
                        str2[i]=str1[i];
    }

    cout <<"Now Your String is : ";
    cout << str2;
    

    return 0;
}