#include <iostream>
#include<cmath>
using namespace std;
int sum(int t)
{
    
    int s=0;
    while(t!=0)
    {
        int rem=t%10;
        s+=rem;
        t=t/10;
        
    }
    return s;
}
int prime(int n)
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
     return 0;
    else{
        return 1;
    }
}
int main() {
        int n;
        cin>>n;
        int f=sum(n);
        if(f<10)
        {
           cout<<prime(f); 
        }
        else{
            while(f>=10)
            {
                f=sum(f);
            }
            cout<<prime(f);
        }
        return 0;
}
