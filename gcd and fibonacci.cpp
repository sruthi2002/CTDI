#include <iostream>
#include<cmath>
using namespace std;
int fib(int n)
{
        if(n==0)
        {
            return 0;
        }
        else if(n==1)
        {
            return 1;
        }
        else{
            return fib(n-1)+fib(n-2);
        }
}
int gcd(int a,int b)
{
        if(b==0)
        {
            return a;
        }
        else{
            return gcd(b,a%b);
        }
}
int main() {
	int a,b;
	cin>>a>>b;
	int s1=fib(a);
	int s2=fib(b);
	int sol=gcd(s1,s2);
	cout<<sol;
	return 0;
}