#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int d1, d2, v1, v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;

    int totalVaccines = 0, d = 0;
    while (totalVaccines < p)
    {
        d++;
        if (d >= d1)
            totalVaccines += v1;
        if (d >= d2)
            totalVaccines += v2;
    }

    cout << d << '\n';
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