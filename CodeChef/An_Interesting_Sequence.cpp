#include<bits/stdc++.h>

using namespace std;

const int MAX = 4e6 + 10;
int dp[MAX], ac[MAX];

void bottomup()
{
    for (int i = 0; i < MAX; i++)
        dp[i] = i;

    for (int i = 2; i < MAX; i++)
    {
        if (dp[i] != i)
            continue;
        dp[i] = i - 1;
        for (int j = 2 * i; j < MAX; j += i)
            dp[j] = dp[j] / i * (i - 1);
    }

    for (int i = 1; i < MAX; i++)
    {
        ac[i] += i - 1;
        for (int j = 2 * i; j < MAX; j += i)
            ac[j] += (i * ((1 + dp[j / i]) / 2));
    }
}

void  solve()
{
    int k;
    cin >> k;

    cout << ac[4 * k + 1] << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bottomup();

    int t;
    cin >> t;
    while (t--)
        solve();
}