#include <iostream>
#include<cmath>
using namespace std;
int convertFive(int n)
{
    //Your code here
     string s1,str;
     int res;
      s1 = to_string(n);
      for(int i=0;i<s1.length();i++)
      {
       if(int(s1[i]-'0')==0)
       {
           str +=to_string(5);
       }
       else
       {
           str +=s1[i];
       }
      }
      res =stoi(str);
      return res;

}

int main() {
        int n,a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            cout<<convertFive(a)<<"\n";
        }
        
        return 0;
}