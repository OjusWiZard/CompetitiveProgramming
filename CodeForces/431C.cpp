#include<bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;
int dp[101][2];

int calc(int untilNow, bool takenD, int &n, int &d, int &k)
{
    long long int ans = 0;
    if (dp[untilNow][takenD] != -1)
        ans = dp[untilNow][takenD];
    else if (untilNow == n && takenD)
        ans = 1;
    else if (untilNow < n)
        if (takenD)
            for (int i = 1; i <= k; i++)
                ans = (ans + calc(untilNow + i, takenD, n, d, k)) % mod;
        else if (!takenD)
            if (untilNow + d > n)
                ans = 0;
            else
                for (int i = 1; i <= k; i++)
                    ans = (ans + calc(untilNow + i, i >= d, n, d, k)) % mod;
    return dp[untilNow][takenD] = ans;
}

void  solve()
{
    memset(dp, -1, 202 * sizeof(int));

    int n, k, d;
    cin >> n >> k >> d;
    cout << calc(0, false, n, d, k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    t = 1;
    while (t--)
        solve();
}