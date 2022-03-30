#include <iostream>
#include<cmath>
using namespace std;

int main() {
int n;
cin>>n;
int c=0;
    if(n==1)
         c=1;
    for (int i = 2; i <= sqrt(n); i++) {
           
            if(n%i==0)
            {
                c=1;
                break;
            }
    }
    if(c==1)
         cout<<"No";
    else
         cout<<"Yes";
return 0;
}