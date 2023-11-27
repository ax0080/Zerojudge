#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int h;
    while(cin>>h)
    {
        cout<<h-h%2<<endl;
    }
    return 0;
}