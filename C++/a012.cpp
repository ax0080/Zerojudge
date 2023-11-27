#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        if(a>=b)
        {
            cout<<a-b<<endl;
        }

        if(a<b)
        {
            cout<<b-a<<endl;
        }
    }
    return 0;
}