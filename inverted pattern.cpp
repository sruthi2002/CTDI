#include <iostream>
#include<string>
using namespace std;

int main() {
int n,s=0;
cin>>n;
for(int i=n; i>=1; i--)
    {
     for(int j=1; j<=s; j++)
      cout<<" ";
   
     for(int j=1; j<=i; j++)
      cout<<"*";
     for(int j=i-1; j>=1; j--)
      printf("*");
     s++;
     cout<<"\n";
    }
return 0;
}