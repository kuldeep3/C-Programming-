#include <iostream>
using namespace std;

int main() {
    string s,toggle="";
    cin>>s;
    int len=s.length();
    for (int i = 0; i <len; i++)
    {
        int x=s[i];
        if (x>=65 && x<=90)
        {
            x=x+32;
        }
        else if (x>=97 && x<=122)
        {
            x=x-32;
        }
        char c =x;
        toggle=toggle+c;
    }
    cout<<toggle<<endl;
    return 0;
}