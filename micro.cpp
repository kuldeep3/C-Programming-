#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, temp;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
         for (int i = 0; i < n; i++)
        {
             cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
         {
             for (int j = i + 1; j <= n; j++)
             {
                 if (a[i] > a[j])
                 {
                     temp = a[j];
                     a[j] = a[i];
                     a[i] = temp;
                 }
             }
             cout<<a[i]<<" ";
         }
        int time = k - a[0];
        if (time<0)
        {
            time=0;
        }
        
        cout << time << endl;
    }
}