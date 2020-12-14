#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;

    cout << ((a / 2) * (b / 2)) + (((a + 1) / 2) * ((b + 1) / 2)) << '\n';
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