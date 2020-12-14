#include <bits/stdc++.h>

using namespace std;

bool comp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first < b.first)
        return true;
    else if (a.first == b.first && a.second > b.second)
        return true;
    else
        return false;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0;
    while (x > 0 && i < n - 1)
    {
        int toggler = (1 << (int)floor(log2(a[i])));
        a[i] ^= toggler;

        bool XORed = false;
        for (int j = i + 1; j < n; j++)
            if ((a[j] ^ toggler) < a[j])
            {
                a[j] ^= toggler;
                XORed = true;
                break;
            }
        if (!XORed)
            a[n - 1] ^= toggler;

        while (a[i] == 0 && i < n - 1)
            i++;
        x--;
    }
    if (n == 2 && x % 2 == 1)
    {
        a[n - 1] ^= 1;
        a[n - 2] ^= 1;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
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