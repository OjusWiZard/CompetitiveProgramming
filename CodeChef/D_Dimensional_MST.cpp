#include <bits/stdc++.h>
using namespace std;

const int maxn = 200005;

struct edge
{
	int a, b, w;
};

bool cmp(edge &x, edge &y)
{
	return (x.w < y.w);
}

int parent[maxn], SZ[maxn], points[maxn][5];

void make_set(int x)
{
	parent[x] = x;
	SZ[x] = 1;
}

int find_set(int x)
{
	if (x == parent[x])
		return x;
	return parent[x] = find_set(parent[x]);
}

void Union(int u, int v)
{
	u = find_set(u);
	v = find_set(v);
	if (u != v)
	{
		if (SZ[u] < SZ[v])
			swap(u, v);
		parent[v] = u;
		SZ[u] += SZ[v];
	}
}

void solve()
{
	int N, D;
	cin >> N >> D;
	int M = (long long)N * (N - 1) / 2;

	for (int i = 1; i <= N; ++i)
	{
		make_set(i);
	}

	vector<edge> e;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < D; j++)
			cin >> points[i][j];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int dist = 0;
			for (int k = 0; k < D; k++)
				dist += abs(points[i][k] - points[j][k]);
			edge E;
			E.a = i;
			E.b = j;
			E.w = -1 * dist;
			e.push_back(E);
		}
	}

	sort(e.begin(), e.end(), cmp);

	int maxWeight = 0;
	for (int i = 0; i < e.size(); ++i)
	{
		int u = e[i].a, v = e[i].b;
		u = find_set(u);
		v = find_set(v);
		if (u != v)
		{
			maxWeight += e[i].w;
			Union(u, v);
		}
	}

	cout << (-1 * maxWeight) << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	t = 1;
	while (t--)
		solve();
	return 0;
}