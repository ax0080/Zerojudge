#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    unsigned int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a>b+c || (a+c>b&&b>a&&a>c) || (a+b>c&&c>a&&a>b))
            cout<<"A"<<endl;
        else if(b>a+c ||(b+c>a&&a>b&&b>c) || (a+b>c&&c>b&&b>a))
            cout<<"B"<<endl;
        else
            cout<<"C"<<endl;

    }
    return 0;
}