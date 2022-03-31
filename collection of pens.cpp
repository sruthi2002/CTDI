#include <iostream>
#include<cmath>
using namespace std;
bool check(int n)
{
      int c=0;
      if(n==0 || n==1)
      {
          c=1;
      }
      else{
          for(int i=2;i*i<=n;i++)
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
	int A,B;
	cin>>A>>B;
	int sum=0;
    for(int i=1;i<=1000000;i++)
    {
            sum=A+B+i;
            if(check(sum)==true)
            {
                cout<<i;
                break;
            }
    }
	
	return 0;
}