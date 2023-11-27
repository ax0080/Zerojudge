#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a;
    while(cin>>a)
    {
        if(a<11)
            cout<<6*a<<endl;
        else if(a<21)
            cout<<60+2*(a-10)<<endl;
        else if(a<41)
            cout<<80+(a-20)<<endl;
        else
            cout<<100<<endl;

    }
    return 0;
}