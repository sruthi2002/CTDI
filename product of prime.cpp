#include <iostream>
#include<cmath>
using namespace std;

bool prime(int n)
{
    int flag=0;
    if(n==0|| n==1)
    {
        flag=1;
    }
    else{
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
     return false;
    else{
        return true;
    }
}
int main() {
        int n;
        cin>>n;
        int p=1;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                if(prime(i))
                {
                    p*=i;
                }
            }
        }
        cout<<p;
        return 0;
}