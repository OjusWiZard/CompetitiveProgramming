#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k, sum = 0;
    cin >> n >> k;
    while (n--)
    {
        int a;
        cin >> a;
        sum += a;
    }
    if (sum % k == 0)
        cout << "0\n";
    else
        cout << "1\n";
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