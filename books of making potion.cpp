#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    if (n>=1000000000 && n<=9999999999)
    {
        int sum= 0;
        for (int i = 10; i >= 1;i--)
        {
            int rem = n%10;
            sum+=rem*i;
            n/=10;
        }
        if (sum%11==0)
        {
            cout<<"Legal ISBN"<<endl;
        }
        
    }
    else
    {
        cout<<"Illegal ISBN"<<endl;
    }
    
return 0;
}