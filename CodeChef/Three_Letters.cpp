#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    unordered_map<char, int> freq;
    for (int i = 0; i < s.length(); i++)
        freq[s[i]]++;

    for (auto f : freq)
        ans += f.second / 2;
    cout << min(ans, (int)s.length() / 3) << '\n';
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