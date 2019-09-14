#include <iostream>
using namespace std;

int main() {
    string s,mpty="";
    cin>>s;
    int len =s.length();
    for (int i = len-1; i >= 0; i--)
    {
        mpty = mpty+s[i];
    }
    if (mpty==s)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    return 0;

}