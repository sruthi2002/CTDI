#include <iostream>
#include<cmath>
using namespace std;


int main() {
        int n,a;
        cin>>n;
        if((n & (n-1))==0)
         cout<<"True";
        else{
            cout<<"False";
        }
        
        return 0;
}