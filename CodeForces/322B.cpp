#include<bits/stdc++.h>

using namespace std;

void  solve()
{
    int r, g, b;
    cin >> r >> g >> b;

    int mini = min({ r, g, b }), ans = 0;

    for (int i = 0; i <= min(2, mini); i++)
        ans = max(ans, (r - i) / 3 + (g - i) / 3 + (b - i) / 3 + i);

    cout << ans << "\n";
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