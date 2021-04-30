#include<bits/stdc++.h>

using namespace std;

void  solve()
{
    long long int n, sum = 0, mod = 1e9 + 7;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        sum = (sum + a + mod) % mod;
    }

    long long int ans = sum, q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        ans = (ans + ans) % mod;
        cout << ans << '\n';
    }
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