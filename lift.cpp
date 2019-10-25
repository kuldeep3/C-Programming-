#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int a = 0;
    int b = 7;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n <= (a + b) / 2)
        {
            a = a + n - a;
            cout << "A" << endl;
        }

        else
        {
            cout << "B" << endl;
        }
    }
}