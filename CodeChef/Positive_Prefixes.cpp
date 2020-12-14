#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans[n] = {0};

    int lastPos = 0, lastNeg = 0;
    for (int i = 0; i < n; i++)
        if (n % 2 ^ (i + 1) % 2)
            lastNeg = ans[i] = -(i + 1);
        else
            lastPos = ans[i] = i + 1;
    lastNeg *= -1;

    int positives = 0;
    for (int i = 0; i < n; i++)
        if (ans[i] > 0)
            positives++;

    int off = abs(positives - k);
    if (positives > k)
        for (int i = lastPos - 1; i >= 0 && off; i -= 2, off--)
            ans[i] *= -1;
    else if (positives < k)
        for (int i = lastNeg - 1; i >= 0 && off; i -= 2, off--)
            ans[i] *= -1;

    for (int i = 0; i < n; i++)
        cout << ans[i] << ' ';
    cout << '\n';
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