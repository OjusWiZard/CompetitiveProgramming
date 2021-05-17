#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;
vector<long long int> sum, value;

bool comp(int &a, int &b)
{
    return sum[a] > sum[b];
}

void dfs(int n, int parent, vector<unordered_set<int>> &e)
{
    for (auto edge : e[n])
        if (edge != parent)
            dfs(edge, n, e);

    vector<int> children;
    for (auto edge : e[n])
        if (edge != parent)
            children.push_back(edge);

    sort(children.begin(), children.end(), comp);

    for (int i = 0; i < children.size(); i++)
        value[children[i]] = i + 1;

    for (auto edge : e[n])
        if (edge != parent)
            sum[n] += value[edge] * sum[edge];
}

void  solve()
{
    int n, x;
    cin >> n >> x;
    vector<unordered_set<int>> edges(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        edges[u - 1].insert(v - 1);
        edges[v - 1].insert(u - 1);
    }

    sum.clear();
    value.clear();
    sum.resize(n, 1);
    value.resize(n, 0);
    dfs(0, -1, edges);
    cout << (sum[0] % mod) * x % mod << '\n';
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