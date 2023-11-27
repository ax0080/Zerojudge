#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
    char l;
    int num,sum;
    while(cin>>l>>num)
    {
        sum=0;
        sum+=a[l-65]/10+(a[l-65]%10)*9;
        sum+=num%10;

        num/=10;
        for(int i=1;i<=8;i++)
        {
            sum+=(num%10)*i;
            num/=10;

        }

        if(sum%10==0)
            cout<<"real"<<endl;
        else
            cout<<"fake"<<endl;
    }
    return 0;
}