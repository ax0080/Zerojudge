#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c,sum=0;
    while(cin>>a>>b>>c)
    {
        if(a>b)
            sum=a;
        else
            sum=b;

        if(sum<c)
            sum=c;

        cout<<sum;

    }
    return 0;
}