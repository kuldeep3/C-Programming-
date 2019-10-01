#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);

    string original_str, reverse_str;

    cin >> original_str;

    reverse_str = original_str;

    reverse(reverse_str.begin(), reverse_str.end());

    if(reverse_str == original_str)
        cout << "YES\n";

    else
        cout << "NO\n";

    reverse_str.clear();

    original_str.clear();

    return 0;
}
