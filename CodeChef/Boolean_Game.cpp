#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    ll g[n + 1];
    for (ll i = 0; i < n; i++)
        cin >> g[i + 1];

    vector<vector<pair<ll, ll>>> mFrom(n + 1), dp(n + 1);
    for (ll i = 0; i < m; i++)
    {
        ll u, v, d;
        cin >> u >> v >> d;
        mFrom[u].push_back(make_pair(i, d));
        mFrom[v].push_back(make_pair(i, d));
    }

    dp[0].push_back(make_pair(0, 0));
    for (ll i = 1; i <= n; i++)
    {
        vector<pair<ll, ll>> tp;
        tp.insert(tp.end(), dp[i - 1].begin(), dp[i - 1].end());
        ll index = 0, tempI = 0;
        set<ll> f;
        for (ll j = i; j >= 1; j--)
        {
            index += g[j];
            tempI ^= 1LL << j;
            for (auto t : mFrom[j])
                if (f.count(t.first))
                    index += t.second;
                else
                    f.insert(t.first);

            if (j > 1)
                for (auto t : dp[j - 2])
                    tp.push_back(make_pair(t.first + index, tempI ^ t.second));
            else
                tp.push_back(make_pair(index, tempI));
        }

        sort(tp.begin(), tp.end(), greater<>());

        set<ll> f2;
        ll done = 0;
        for (ll j = 0; j < tp.size() && done < k; j++)
        {
            if (f2.count(tp[j].second))
                continue;
            dp[i].push_back(tp[j]);
            done++;
            f2.insert(tp[j].second);
        }
    }

    for (ll i = 0; i < k; i++)
        cout << dp[n][i].first << " ";

    cout << '\n';
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