#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	int c=0;
	for(int i=a[0];i<=a[n-1];i++)
	{
	   if(a[c]==i)
	   {
	       c++;
	   }
	   else{
	       cout<<i<<" ";
	   }
	}
	return 0;
}