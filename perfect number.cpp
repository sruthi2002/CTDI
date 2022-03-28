#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin>>n;
	int b=sqrt(n);
	if(b*b==n)
	{
	    cout<<"Yes";
	}
	else{
	    cout<<"No";
	}
	return 0;
}