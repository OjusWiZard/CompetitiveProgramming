#include<bits/stdc++.h>

using namespace std;

void  solve()
{
    int n, v;
    cin >> n >> v;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    vector<int> fruits(3002, 0);
    for (int i = 0; i < n; i++)
        fruits[a[i]] += b[i];

    int collected = 0;
    for (int i = 1; i <= 3001; i++)
    {
        int fromPrev = min(v, fruits[i - 1]);
        fruits[i - 1] -= fromPrev;
        if (fromPrev < v)
        {
            int fromThis = min(v - fromPrev, fruits[i]);
            fruits[i] -= fromThis;
            fromPrev += fromThis;
        }
        collected += fromPrev;
    }

    cout << collected << '\n';
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