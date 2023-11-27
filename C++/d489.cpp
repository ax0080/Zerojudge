#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    long long int a,b,c;
    while(cin>>a>>b>>c)
    {
        int r=(a+b+c)/2;
        
        cout<<r*(r-a)*(r-b)*(r-c)<<endl;
    }
    return 0;
}