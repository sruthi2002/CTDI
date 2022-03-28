#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main() {
	int n;
	cin>>n;
	string a=to_string(n);
	string b=a;
	int len;
	for(len=0;a[len]!='\0';len++)
	{
	    
	}
	int k;
	cin>>k;
    char res;
	for(int i=0;i<len;i++)
	{
	   
	      if(i==k-1)
	      {
	         res=b[i];
	         break;
	      }
	      
	    
	}
	int sol=res-'0';
	cout<<sol;
	return 0;
}