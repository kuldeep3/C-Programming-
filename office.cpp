#include <bits/stdc++.h>
using namespace std;

int main() {
    int d,online,classic;
    cin>>d;
    int oc,of,od;
    cin>>oc>>of>>od;
    int cs,cb,cm,cd;
    cin>>cs>>cb>>cm>>cd;
    online = oc+((d-of)*od);
    classic = cb+((d/cs)*cm)+(d*cd);
    if (online<=classic)
    {
        cout<<"Online Taxi"<<endl;
    }
    else
    {
        cout<<"Classic Taxi"<<endl;
    }  
}