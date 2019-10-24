#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,temp,i,j;
    cin>>n;
    int a[n] = {};
    for (i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    for ( i = 1; i <= n-1; i++)
    {
      for ( j = i+1; j <=n; j++)
      {
         if (a[i]>a[j])
         {
             temp = a[i];
             a[i]= a[j];
             a[j] = temp;
         }
      }
    }
    for ( i = 1; i<=n; i++)
    {
       cout<<a[i]<<endl;
    }
}