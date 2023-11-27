#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[10000];
    while(cin>>a)
    {
       for(int i=0;i<strlen(a);i++)
       {
           a[i]-=7;
           cout<<a[i];
       }
       cout<<""<<endl;

    }
    return 0;
}