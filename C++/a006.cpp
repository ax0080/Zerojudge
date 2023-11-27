#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 	int a,b,c,d,e;
	while(cin>>a>>b>>c)
 {
 	if(b*b-4*a*c>0)
	 {
	 	d=((-1)*b+sqrt(b*b-4*a*c))/2/a;
	 	e=((-1)*b-sqrt(b*b-4*a*c))/2/a;
	 	cout<<"Two different roots x1="<<d<<" , x2="<<e<<endl;
	 }
 	else if(b*b-4*a*c==0)
 	 {
 	 	cout<<"Two same roots x="<<(-1)*b/a/2<<endl; 
	 }
	else 
		cout<<"No real root"<<endl;
 }
    return 0;
}