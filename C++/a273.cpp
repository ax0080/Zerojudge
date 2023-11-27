#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        if(n!=0&&k!=0)
        {
            if(n%k==0)
            cout<<"Ok!"<<endl;
            else
            cout<<"Impossib1e!"<<endl;
        }
        else if(n==0)
            cout<<"Ok!"<<endl;
        else
            cout<<"Impossib1e!"<<endl;
        
    }
    return 0;
}