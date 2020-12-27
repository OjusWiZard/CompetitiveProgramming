#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    string s, p;
    cin >> n >> s >> p;
    bool possible = true;

    for (int i = n - 1, zerosAtRightS = 0, zerosAtRightP = 0; i >= 0; i--)
    {
        zerosAtRightS += (s[i] == '0');
        zerosAtRightP += (p[i] == '0');

        if (zerosAtRightP > zerosAtRightS)
            possible = false;
    }

    for (int i = 0, onesAtLeftS = 0, onesAtLeftP = 0; i < n; i++)
    {
        onesAtLeftS += (s[i] == '1');
        onesAtLeftP += (p[i] == '1');

        if (onesAtLeftP > onesAtLeftS)
            possible = false;
    }

    if (possible)
        cout << "Yes\n";
    else
        cout << "No\n";
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