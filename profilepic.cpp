#include <iostream>
using namespace std;

int main(){
    int l,n,w,h;
    cin>>l;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>w>>h;
    if (w<l||h<l)
    {
        cout<<"UPLOAD ANOTHER"<<endl;
    }
    else
    {
        if (w==h)
        {
            cout<<"ACCEPTED"<<endl;
        }
        else
        {
            cout<<"CROP IT"<<endl;
        } 
    }
    }
    
    
    return 0;
    
}