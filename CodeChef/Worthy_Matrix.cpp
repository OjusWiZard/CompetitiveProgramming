#include<bits/stdc++.h>

using namespace std;

bool kWorthy(vector<vector<long long int>> &a, int i1, int j1, int i2, int j2)
{
    long long int dev = a[i2][j2];

    if (i1 > 0)
        dev -= a[i1 - 1][j2];
    if (j1 > 0)
        dev -= a[i2][j1 - 1];
    if (i1 > 0 && j1 > 0)
        dev += a[i1 - 1][j1 - 1];

    return dev >= 0;
}

void  solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    long long int ans = 0;
    vector<vector<long long int>> a(n, vector<long long int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            a[i][j] -= k;
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m - 1; j++)
            a[i][j + 1] += a[i][j];

    for (int j = 0; j < m; j++)
        for (int i = 0; i < n - 1; i++)
            a[i + 1][j] += a[i][j];

    for (int l = 0; l < min(m, n); l++)
        for (int i = 0; i + l < n; i++)
            for (int j = 0; j + l < m; j++)
                ans += kWorthy(a, i, j, i + l, j + l);

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