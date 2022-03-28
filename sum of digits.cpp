#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int s=0;
	while(n!=0)
	{
	    int t=n%10;
	    s+=t;
	    n/=10;
	}
	cout<<s;
	return 0;
}