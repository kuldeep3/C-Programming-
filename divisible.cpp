#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n] = {};
    int b[n/2] = {};
    int c[n/2] = {};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        b[i] = a[i];
        
    }
    for (int i = n/2; i < n; i++)
    {
        c[i] = a[i];
    }
    
}