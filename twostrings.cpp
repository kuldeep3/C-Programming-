#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int a[26]={0};
        int b[26]={0};
        for (int i = 0; i < s1.length(); i++)
        {
            int x=s1[i]-'a';
            int y=s2[i]-'a';
            a[x]++;
            b[y]++;
        }
        int c=0;
        for (int i = 0; i < 26; i++)
        {
            if (a[i]==b[i])
            {
                c++;
            }  
        }
        if(c==26){
cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        
    }
    
    
}