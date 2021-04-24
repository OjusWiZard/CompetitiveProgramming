#include<bits/stdc++.h>

using namespace std;

vector<vector<bool>> g;
vector<bool> visited;
vector<unordered_set<int>> teams;

int dfs(vector<vector<bool>> &g, unordered_set<int> &team, int i)
{
    if (visited[i])
        return 0;
    visited[i] = true;
    team.insert(i + 1);
    int edges = 0;
    for (int j = 0; j < g.size(); j++)
        if (g[i][j])
            edges += dfs(g, team, j);
    return edges + 1;
}

bool comp(unordered_set<int> &a, unordered_set<int> &b)
{
    return a.size() > b.size();
}

void  solve()
{
    int n, m;
    cin >> n >> m;
    g.resize(n);
    visited.resize(n, false);
    for (auto &r : g)
        r.resize(n, false);

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        g[a - 1][b - 1] = g[b - 1][a - 1] = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            teams.push_back({ i + 1 });
            dfs(g, teams[teams.size() - 1], i);
        }
    }

    sort(teams.begin(), teams.end(), comp);
    int l = 0, r = teams.size() - 1;
    if (teams[0].size() > 3)
    {
        cout << "-1\n";
        return;
    }

    while (teams[l].size() > 2)
        l++;

    while (l < r)
    {
        if (teams[l].size() == 2 && teams[r].size() == 1)
        {
            teams[l].insert(*(teams[r].begin()));
            teams.pop_back();
            l++;
            r--;
        }
        else if (teams[l].size() == 1 && teams[r].size() == 1)
        {
            teams[l].insert(*(teams[r].begin()));
            teams.pop_back();
            r--;
        }
        else
        {
            cout << "-1\n";
            return;
        }
    }

    for (auto team : teams)
    {
        for (auto member : team)
            cout << member << ' ';
        cout << '\n';
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