#include <iostream>
#include<cmath>
using namespace std;
int fib(int n) 
{
      if(n==0||n==1)
      {
        return n;
      }
      return fib(n-1)+fib(n-2);  
    }
int main() {
	long long int N;
	cin>>N;
	long long int a=(long long int)(sqrt(N));
    if(check(N)==true && a*a==N)
       cout<<"1";
    else
       cout<<"0";
	return 0;
}