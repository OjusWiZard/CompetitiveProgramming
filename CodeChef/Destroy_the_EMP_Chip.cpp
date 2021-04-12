#include<bits/stdc++.h>
#define ll long long int
using namespace std;

string query(ll x, ll y)
{
    cout << 1 << ' ' << x << ' ' << y << endl;
    string feedback;
    cin >> feedback;
    if (feedback == "FAILED")
        exit(0);
    return feedback;
}

void hellfire(int q, ll x1, ll y1, ll x2, ll y2)
{
    if (q <= 0)
        return;

    string feedback = query((x1 + x2) / 2, (y1 + y2) / 2);
    if (feedback == "O")
        return;
    if (feedback[0] == 'P')
        x2 = (x1 + x2) / 2 - 1;
    if (feedback[0] == 'N')
        x1 = (x1 + x2) / 2 + 1;
    if (feedback[1] == 'P')
        y2 = (y1 + y2) / 2 - 1;
    if (feedback[1] == 'N')
        y1 = (y1 + y2) / 2 + 1;

    hellfire(q - 1, x1, y1, x2, y2);
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t, q, d;
    cin >> t >> q >> d;
    while (t--)
        hellfire(q, (ll)-1e1, (ll)-1e1, (ll)1e1, (ll)1e1);
    return 0;
}