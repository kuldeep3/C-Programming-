#include <iostream>
#define mod 1000000007;
using namespace std;

int main() {
    int n,prod = 1;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        prod = (prod*a[i])%mod;
    }
    cout<<prod<<endl;
    return 0;
}