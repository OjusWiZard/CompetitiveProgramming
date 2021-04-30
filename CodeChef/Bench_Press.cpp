#include<bits/stdc++.h>

using namespace std;

void  solve()
{
    int n, w, wr;
    cin >> n >> w >> wr;

    unordered_set<int> alreadyFound;
    long long int maxW = wr;
    for (int i = 0; i < n; i++)
    {
        int ws;
        cin >> ws;

        if (alreadyFound.find(ws) != alreadyFound.end())
        {
            maxW += 2 * ws;
            alreadyFound.erase(ws);
        }
        else
            alreadyFound.insert(ws);
    }

    cout << (maxW >= w ? "YES\n" : "NO\n");
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