#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        a+=a%2;
        b-=b%2;
        cout<<(b-a)/2+1<<endl;
    }
    return 0;
}