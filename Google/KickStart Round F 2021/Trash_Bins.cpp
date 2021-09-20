#include<bits/stdc++.h>

using namespace std;

long long  solve()
{
    int n;
    cin >> n;
    char bin[n];

    for (int i = 0; i < n; i++)
        cin >> bin[i];

    int left[n] = { 0 };
    int right[n] = { 0 };

    for (int i = 0, d = 0, one = 0; i < n; i++, d++)
    {
        if (bin[i] == '1')
        {
            d = 0;
            one = 1;
        }
        if (one)
            left[i] = d;
        else
            left[i] = -1;
    }

    for (int i = n - 1, d = 0, one = 0; i >= 0; i--, d++)
    {
        if (bin[i] == '1')
        {
            d = 0;
            one = 1;
        }
        if (one)
            right[i] = d;
        else
            right[i] = -1;
    }

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (left[i] == -1)
            ans += right[i];
        else if (right[i] == -1)
            ans += left[i];
        else
            ans += min(left[i], right[i]);
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        cout << "Case #" << i + 1 << ": " << solve() << '\n';
}