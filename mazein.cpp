#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int sum1,sum2;
    int c1,c2,c3,c4;
        c1=0;c2=0;c3=0;c4=0;
    for (int i = 0; i < 200; i++)
    {
        int x =s[i];
        
        if (x==76)
        {
            c1=c1-1;
        }
        if (x==82)
        {
            c2=c2+1;
        }
        if (x==68)
        {
            c3=c3-1;
        }
        if (x==85)
        {
            c4=c4+1;
        }
         sum1 = c1+c2;
         sum2 = c3+c4;
    }
        cout<<sum1<<" "<<sum2<<endl;
    
}