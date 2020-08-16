#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int m, n, ans = 0;
	cin>>m>>n;

	while (m!=n)
	{
		if (m<n)
			swap(m, n);
		bool divided = false;
		for (int div = 2; div*div<=m; div++)
		{
			if (m%div==0)
			{
				m /= div;
				ans++;
				divided = true;
				break;
			}
		}
		if (!divided)
		{
			m = 1;
			ans++;
		}
	}

	cout<<ans;
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