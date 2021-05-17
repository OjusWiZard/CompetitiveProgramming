#include<bits/stdc++.h>

using namespace std;

int dp[100001], mod = 1e9 + 7;

void  solve()
{
    int n;
    cin >> n;
    cout << dp[n - 1] << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    dp[0] = 1;
    for (int i = 1; i <= 1e5; i++)
        dp[i] = (dp[i - 1] * 2) % mod;

    int t;
    cin >> t;
    while (t--)
        solve();
}