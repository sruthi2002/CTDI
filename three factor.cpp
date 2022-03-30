#include <iostream>
#include<cmath>
using namespace std;
bool check(int n)
{
      if(n==0||n==1)
       return 0;
      for(int i=2;i*i<n;i++)
      {
         if(n%i==0)
         return false;
      }
      return true;
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