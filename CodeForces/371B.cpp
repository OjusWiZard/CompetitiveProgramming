#include<bits/stdc++.h>

using namespace std;

void  solve()
{
    bool possible = true;
    int a, b, ans = 0;
    cin >> a >> b;

    int gcd = __gcd(a, b);
    a /= gcd;
    b /= gcd;

    while (a > 1 && possible)
    {
        if (a % 5 == 0)
            a /= 5;
        else if (a % 3 == 0)
            a /= 3;
        else if (a % 2 == 0)
            a /= 2;
        else
            possible = false;
        ans++;
    }
    while (b > 1 && possible)
    {
        if (b % 5 == 0)
            b /= 5;
        else if (b % 3 == 0)
            b /= 3;
        else if (b % 2 == 0)
            b /= 2;
        else
            possible = false;
        ans++;
    }

    if (possible)
        cout << ans << '\n';
    else
        cout << "-1\n";
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