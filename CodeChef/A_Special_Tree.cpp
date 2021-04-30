#include<bits/stdc++.h>

using namespace std;

void dfs(int a, vector<int> &d, vector<unordered_set<int>> &es, vector<bool> &visited, int untilNow)
{
    visited[a] = true;
    d[a] = untilNow;
    for (auto e : es[a])
        if (!visited[e])
            dfs(e, d, es, visited, untilNow + 1);
}

void  solve()
{
    int n, k, a;
    cin >> n >> k >> a;
    vector<int> f(k);
    vector<unordered_set<int>> edge(n);
    for (int i = 0; i < k; i++)
        cin >> f[i];
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        edge[u - 1].insert(v - 1);
        edge[v - 1].insert(u - 1);
    }

    vector<vector<int>> dist(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        vector<bool> visited(n);
        dfs(i, dist[i], edge, visited, 0);
    }

    // for (int i = 0; i < dist.size(); i++)
    // {
    //     for (int j = 0; j < dist[i].size(); j++)
    //         cout << dist[i][j] << ' ';
    //     cout << '\n';
    // }


    vector<int> ansU;
    for (int i = 0; i < n; i++)
    {
        int ans, max = -INT_MAX;
        for (auto u : f)
        {
            int d = dist[a - 1][u - 1] - dist[i][u - 1];

            if (d > max)
            {
                max = d;
                ans = u;
            }
        }
        ansU.push_back(ans);
        cout << max << ' ';
    }
    cout << '\n';
    for (int i = 0; i < ansU.size(); i++)
        cout << ansU[i] << ' ';
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