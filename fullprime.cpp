#include <iostream>
#include<cmath>
using namespace std;
bool isprime(int n)
{
        int c=0;
        if(n==1 ||n==0)
         c=1;
        else{
            for(int i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    c=1;
                    break;
                }
            }
        }
        if(c==1)
         return false;
        else{
            return true;
        }
}
int main() {
	int N;
	cin>>N;
	int c=0;
	    int count=0;
	    int t=N;
	    int t1=N;
	    int check=N;
	    while(t!=0)
	    {
	        int rem=t%10;
	        if(isprime(rem))
	        {
	         c+=1;   
	        }
	        t/=10;
	    }
	    if(isprime(check))
	    {
	        c++;
	    }
	    while(t1!=0)
	    {
	      count++;
	      t1/=10;
	    }
	    if(c==count+1)
	    {
	        cout<<"1";
	    }
	    else{
	        cout<<"0";
	    }
	return 0;
}