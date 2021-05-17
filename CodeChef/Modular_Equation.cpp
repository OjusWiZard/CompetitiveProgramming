#include<bits/stdc++.h>

using namespace std;

void  solve()
{
    long long int n, m, ans = 0;
    cin >> n >> m;

    vector<long long int> mods(n + 1, 1);
    for (int i = 2; i <= n; i++)
    {
        ans += mods[m % i];
        for (int j = m % i; j <= n; j += i)
            mods[j]++;
    }

    cout << ans << '\n';
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