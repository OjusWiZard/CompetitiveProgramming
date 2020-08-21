#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int n, m;
	cin>>n>>m;
	vector< vector<char>> mat(n, vector<char>(n));
	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++)
			cin>>mat[i][j];

	int q;
	cin>>q;
	vector<vector<int>> dp(n+2, vector<int>(m+2)), op(n, vector<int>(m));
	while (q--)
	{
		int x1, y1, x2, y2;
		cin>>x1>>y1>>x2>>y2;

		dp[x1][y1]++;
		dp[x2+1][y2+1]++;
		dp[x2+1][y1]--;
		dp[x1][y2+1]--;
	}

	for (int i = 0; i<n; i++)
	{
		int sum = 0;
		for (int j = 0; j<m; j++)
		{
			sum += dp[i+1][j+1];
			op[i][j] = sum;
		}
	}
	for (int j = 0; j<m; j++)
	{
		int sum = 0;
		for (int i = 0; i<n; i++)
		{
			sum += dp[i+1][j+1];
			op[i][j] = sum;
		}
	}

	for (int i = 0; i<n; i++)
	{
		int sum = 0;
		for (int j = 0; j<m; j++)
		{
			sum += op[i][j];
			cout<<(sum+mat[i][j]-'0')%2;
		}
		cout<<"\n";
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