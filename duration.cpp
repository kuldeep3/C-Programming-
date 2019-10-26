#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while (n--)
    {
        int sh,sm,eh,em,min,hr;
        cin>>sh>>sm>>eh>>em;
        if (em<sm)
        {
            em = em+60;
            min = em-sm;
            eh = eh - 1;
        }
        else
        {
            min = em-sm;
        }
        hr = eh-sh;
        cout<<hr<<" "<<min<<endl;
    }
    
}