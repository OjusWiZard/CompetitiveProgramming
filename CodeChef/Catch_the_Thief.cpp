#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int x, y, k, n;
    cin >> x >> y >> k >> n;

    if (abs(x - y) % (2 * k) == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
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