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
	int min=a[0];
	for(int i=1;i<n;i++)
	{
	    if(a[i]<min)
	    {
	        min=a[i];
	    }
	}
	int max=a[0];
	for(int i=1;i<n;i++)
	{
	    if(a[i]>max)
	    {
	        max=a[i];
	    }
	}
	cout<<"min = "<<min<<",";
	cout<<"max = "<<max;
	return 0;
}