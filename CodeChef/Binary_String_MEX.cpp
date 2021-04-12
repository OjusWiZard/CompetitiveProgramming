#include<bits/stdc++.h>

using namespace std;
const int MAXN = (int)1e6;
int dp[2][MAXN + 2], nextOf[2][MAXN];

void solve()
{
    string s;
    cin >> s;
    int n = s.length(), prev = -1;
    for (int i = 0; i < n; i++)
        if (s[i] == '0')
            while (prev < i)
                nextOf[0][++prev] = i;

    while (++prev < n)
        nextOf[0][prev] = n;

    if (nextOf[0][0] == n)
    {
        cout << "0\n";
        return;
    }

    prev = -1;
    for (int i = 0; i < n; i++)
        if (s[i] == '1')
            while (prev < i)
                nextOf[1][++prev] = i;

    while (++prev < n)
        nextOf[1][prev] = n;

    dp[0][n] = dp[0][n + 1] = dp[1][n] = dp[1][n + 1] = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        dp[0][i] = dp[0][i + 1];
        if (s[i] == '0' && nextOf[1][i] < n)
            dp[0][i] = max(dp[0][i], dp[0][nextOf[1][i] + 1] + 1);
        if (s[i] == '1' && nextOf[0][i] < n)
            dp[0][i] = max(dp[0][i], dp[0][nextOf[0][i] + 1] + 1);

        dp[1][i] = dp[1][i + 1];
        if (nextOf[1][i] < n)
            dp[1][i] = max(dp[1][i], dp[0][nextOf[1][i] + 1] + 1);
    }

    int l = dp[1][0] + 1, index = nextOf[1][0] + 1;
    string ans = "1";
    for (int i = 1; i < l; i++)
    {
        if (index >= n)
        {
            ans.push_back('0');
            continue;
        }
        if (nextOf[0][index] >= n)
        {
            ans.push_back('0');
            index = nextOf[0][index] + 1;
            continue;
        }
        if (dp[0][nextOf[0][index] + 1] < l - i - 1)
        {
            ans.push_back('0');
            index = nextOf[0][index] + 1;
        }
        else
        {
            ans.push_back('1');
            index = nextOf[1][index] + 1;
        }
    }

    cout << ans << "\n";
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