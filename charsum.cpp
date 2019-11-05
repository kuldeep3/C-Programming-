#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int x = s[i];
        int c = x-96;
        sum += c;   
    }
    cout<<sum<<endl;
}