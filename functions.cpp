#include <iostream>
#include<cmath>
using namespace std;
int postdec(int n)
{
    while(n!=0)
    {
        n--;
    }
    return n;
}
int predec(int n)
{
    while(n!=0)
    {
        --n;
    }
    return n;
}
int incdec(int a,int b)
{
    if(b<a)
     return b+a;
    else
     return b-a;
}
int rem(int a,int b)
{
    if(a>b)
     return a%b;
    else
     return b%a;
}
int main() {
	int a,b;
	cin>>a>>b;
	cout<<postdec(a)<<"\n";
	cout<<predec(a)<<"\n";
	cout<<incdec(a,b)<<"\n";
	cout<<rem(a,b);
	return 0;
}