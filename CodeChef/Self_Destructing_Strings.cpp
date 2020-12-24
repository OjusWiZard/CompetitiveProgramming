#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    int ones = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '1')
            ones++;

    if (s.size() % 2 || ones == 0 || ones == s.size())
        cout << "-1\n";
    else
    {
        cout << abs(ones - (int)s.size() / 2) << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}