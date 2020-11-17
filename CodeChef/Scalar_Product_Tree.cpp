#include <bits/stdc++.h>

using namespace std;
const long long mod = 4294967296;
int *myparent;

struct node
{
    int index, weight;
    unordered_set<node *> edge;
};
node *W;

struct pairHash
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2> &p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
unordered_map<pair<int, int>, long long, pairHash> dp;

void DFS(node *root, node *parent)
{
    for (node *neighbour : root->edge)
        if (neighbour != parent)
            DFS(neighbour, root);

    if (root->index != 1)
        myparent[root->index - 1] = parent->index - 1;
}

long long dotProduct(int u, int v)
{
    if (v < u)
        swap(u, v);
    if (dp.find({u, v}) == dp.end())
        return dp[{u, v}] = ((long long)W[u].weight * W[v].weight % mod + dotProduct(myparent[u], myparent[v])) % mod;
    else
        return dp[{u, v}];
}

void solve()
{
    int n, q;
    cin >> n >> q;
    node w[n];
    int myParent[n] = {-1};
    myparent = myParent;
    W = w;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i].weight;
        w[i].index = i + 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        w[a - 1].edge.insert(&w[b - 1]);
        w[b - 1].edge.insert(&w[a - 1]);
    }

    DFS(&w[0], (node *)-1);
    dp[{0, 0}] = (long long)w[0].weight * w[0].weight % mod;

    while (q--)
    {
        int u, v;
        cin >> u >> v;
        cout << dotProduct(u - 1, v - 1) << '\n';
    }

    for (auto p : dp)
    {
        cout << '{' << p.first.first << ',' << p.first.second << "} = " << p.second << '\n';
    }
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