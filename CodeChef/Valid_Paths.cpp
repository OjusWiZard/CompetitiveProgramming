#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
long long int ans;

vector<vector<int>> tree;
vector<long long int> dp, net;

long long int binpow(long long int a, long long int b, long long int md)
{
    long long int res = 1;
    while (b != 0)
    {
        if (b & 1)
        {
            res *= a;
            res %= md;
        }
        a *= a;
        a %= md;
        b >>= 1;
    }

    return res %= md;
}

void dfs(int n, int parent)
{
    dp[n] = 1, net[n] = 1;
    long long int sum = 0, cnt = 0;
    for (int i = 0; i < tree[n].size(); i++)
    {
        long long int node = tree[n][i];
        if (node != parent)
        {
            dfs(node, n);
            dp[n] += ((2 * dp[node]) % mod), dp[n] %= mod, cnt++, net[n] += net[node], net[n] %= mod, net[n] += dp[node], net[n] %= mod;
            sum += dp[node];
        }
    }

    for (int i = 0; i < tree[n].size(); i++)
    {
        int node = tree[n][i];
        if (node != parent)
        {
            net[n] += (dp[node] * ((sum - dp[node] + mod) % mod)) % mod;
            net[n] %= mod;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 1; i < t + 1; i++)
    {
        ans = 0;
        int n;
        cin >> n;
        tree.resize(n + 1), dp.resize(n + 1), net.resize(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int l, r;
            cin >> l >> r;
            tree[l].push_back(r), tree[r].push_back(l);
        }

        dfs(1, 1);
        long long int ans = net[1] % mod;
        cout << ans << "\n";
        dp.clear(), tree.clear(), net.clear();
    }

    return 0;
}