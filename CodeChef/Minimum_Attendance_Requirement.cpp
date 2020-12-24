#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, present = 0;
    cin >> n;
    string attendance;
    cin >> attendance;
    for (int i = 0; i < attendance.size(); i++)
        if (attendance[i] == '1')
            present++;

    present += 120 - n;
    if (present >= 90)
        cout << "YES\n";
    else
        cout << "NO\n";
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