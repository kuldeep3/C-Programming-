#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int bleft;
    int i=1;
    int bused=0;
    while (bused+(3*i)<=n)
    {
        bused+=3*i;
        i++;
    }
    bleft=n-bused;
    if (bleft>=i)
    {
        cout<<"MOTU"<<endl;
    }
    else
    {
        cout<<"PATLU"<<endl;
    }
    return 0;
}