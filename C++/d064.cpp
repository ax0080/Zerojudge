#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a;
    while(cin>>a)
    {
        if(a%2!=0)
            cout<<"Odd"<<endl;
        else
            cout<<"Even"<<endl;

    }
    return 0;
}