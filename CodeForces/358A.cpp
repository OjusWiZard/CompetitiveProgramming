#include<bits/stdc++.h>

using namespace std;

bool checkIntersection(int a, int b, int c, int d)
{
    if (b < a)
        swap(a, b);
    if (d < c)
        swap(c, d);

    return (a < c &&c < b &&b < d) || (c < a &&a < d &&d < b);
}

void  solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<pair<int, int>> semis;
    semis.push_back(make_pair(a, b));

    bool intersect = false;
    for (int i = 2; i < n && !intersect; i++)
    {
        a = b;
        cin >> b;
        for (int j = 0; j < semis.size() && !intersect; j++)
            intersect |= checkIntersection(a, b, semis[j].first, semis[j].second);
        semis.push_back(make_pair(a, b));
    }

    cout << (intersect ? "yes\n" : "no\n");
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