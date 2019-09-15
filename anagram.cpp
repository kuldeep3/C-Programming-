#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string a,b;
        int count1 = 0,count2 = 0;
        cin>>a>>b;
        for(int l=0;l<a.length();l++){
tolower(a[i]);
        }
           for(int l=0;l<b.length();l++){
tolower(b[i]);
        }
        int arr[26]={0};
        for (int j = 0; j < max(a.length(),b.length()); j++)
        {
            if(j<a.length())
            {
                int k=int(a[j]%97);
            arr[k]++;
            }
            if(j<b.length())
            {
                 int k=int(b[j]%97);
            arr[k]--;
            }
        }
       int sum=0;
        for(int j=0;j<26;j++){
            sum=sum+abs(arr[j]);
        }
cout<<sum<<endl;
    }
}