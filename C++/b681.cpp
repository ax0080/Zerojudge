#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int sum;
    while(cin>>sum)
    {
        if(sum>0)
            cout<<2*sum-1<<endl;
        else
            cout<<sum*(-2)<<endl;
    }
    return 0;
}