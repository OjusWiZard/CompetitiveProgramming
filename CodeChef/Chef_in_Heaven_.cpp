#include<bits/stdc++.h>

using namespace std;

void  solve()
{
    int l;
    cin >> l;
    string s;
    cin >> s;

    bool succeed = false;
    for (int i = 0, good = 0, bad = 0; i < l; i++)
    {
        if (s[i] == '0')
            bad++;
        else
            good++;

        if (good >= bad)
            succeed = true;
    }

    cout << (succeed ? "YES\n" : "NO\n");
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