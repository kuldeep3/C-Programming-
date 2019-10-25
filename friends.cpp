#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       for (int i = n; i > 0; i--)
       {
           for (int j = 0; j <= n-i; j++)
           {
               cout<<"*";
           }
           for (int k = 1; k < 2*i-1; k++)
           {
               cout<<"#";
           }
           for (int j = 0; j <= n-i; j++)
           {
               cout<<"*";
           }
           cout<<endl;
       }
       
    }
    
}