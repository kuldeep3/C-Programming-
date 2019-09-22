#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int flag = 0;
    int var = 0;
    if (s[2] != 'A' || s[2] != 'E' || s[2] != 'I' || s[2] != 'O' || s[2] != 'U' || s[2] != 'Y' && s[6] == '-')
    {
        string s1;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s[i] != '-' && i != 2)
            {
                s1[i] == s[i];
                flag = 1;
            }
        }
        for (int i = 0; i < s1.length(); i++)
        {
            if ((s1[i] + s[i + 1]) % 2 == 0)
            {
                var = 1;
            }
        }
    }

    if (flag == 1 && var == 1)
    {
        cout << "valid" << endl;
    }
    else
    {
        cout << "invalid" << endl;
    }
}