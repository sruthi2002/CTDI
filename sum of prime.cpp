#include <iostream>
using namespace std;
bool isprime(int n)
    {
        if(n==2 ||n==3 || n==5|| n==7)
        {
            return true;
        }
        else{
            return false;
        }
    }
int main() {
int N;
cin>>N;
int s=0;
    while(N!=0)
    {
            int t=N%10;
            if(isprime(t))
             s+=t;
            N/=10;
    }
    cout<<s;
return 0;
}