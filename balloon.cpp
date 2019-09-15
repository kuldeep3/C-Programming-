#include<iostream>
using namespace std;

int main(){
    int T,green,purple,n,x,y;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        cin>>green>>purple;
        cin>>n;
        int count1 = 0, count2 = 0, result;
        for (int j = 0; j < n; j++)
        {
            cin>>x>>y;
            count1 += x;
            count2 += y;
        }
        if (count1 >= count2) result = count1 * min(green,purple) + count2 * max(green, purple);
        else result = count1 * max(green, purple) + count2 * min(green, purple);

        cout<<result<<endl;
        
    }
    return 0;
    
    
}