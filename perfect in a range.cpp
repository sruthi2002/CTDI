#include <iostream>
#include<cmath>
using namespace std;
bool isperfect(int n)
{
    int b=sqrt(n);
	if(b*b==n)
	{
	    return true;
	}
	else{
	    return false;
	}
}
int main() {
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
	    if(isperfect(i))
	     cout<<i<<" ";
	}
	return 0;
}