#include<bits/stdc++.h>

using namespace std;

void  solve()
{
    int n, r;
    cin >> n >> r;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    long long int maxTension = 0, tension = 0;
    for (int i = 0; i < n - 1; i++)
    {
        tension += b[i];
        maxTension = max(maxTension, tension);
        tension -= (long long int)r * (a[i + 1] - a[i]);
        tension = max(0LL, tension);
    }

    cout << max(maxTension, tension + b[n - 1]) << '\n';
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