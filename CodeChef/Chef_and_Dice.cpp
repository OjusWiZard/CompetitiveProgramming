#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long int n;
    cin >> n;

    switch (n % 4)
    {
        case 0:
            cout << (n / 4) * 44 + (n >= 4) * 16 << '\n';
            break;

        case 1:
            cout << (n / 4) * 44 + (n >= 4) * 12 + 20 << '\n';
            break;

        case 2:
            cout << (n / 4) * 44 + (n >= 4) * 8 + 18 + 18 << '\n';
            break;

        case 3:
            cout << (n / 4) * 44 + (n >= 4) * 4 + 18 + 15 + 18 << '\n';
            break;
    }
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