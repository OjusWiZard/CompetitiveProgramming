#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;
    int risks = 0;
    for (int i = 0; i < n; i++)
    {
        int age;
        cin >> age;
        if (age >= 80 || age <= 9)
            risks++;
    }

    cout << ((risks / d) + ((risks % d) > 0)) + (((n - risks) / d) + (((n - risks) % d) > 0)) << '\n';
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