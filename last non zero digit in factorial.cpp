#include <iostream>
#include<cmath>
using namespace std;
int factorial(int n)
{
        int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        return fact;

}
int main() {
	int n;
	cin>>n;
	int t=factorial(n);
    int sol=0;
    while(t!=0)
    {
            int rem=t%10;
            if(rem!=0)
            {
                sol=rem;
                break;
            }
            t/=10;
    }
    cout<<sol;
	return 0;
}