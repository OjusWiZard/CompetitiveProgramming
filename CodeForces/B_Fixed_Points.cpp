#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int n, ans = 0;
	cin>>n;
	int a[n];
	bool swapped[n] = { false }, done = false;
	for (int i = 0; i<n; i++)
	{
		cin>>a[i];
		if (a[i]==i)
			ans++;
	}

	for (int i = 0; i<n; i++)
	{
		if (a[a[i]]==i&&i!=a[i]&&!done)
		{
			swap(a[i], a[a[i]]);
			ans += 2;
			done = true;
		}
	}

	for (int i = 0; i<n; i++)
	{
		if (a[i]!=i&&!swapped[a[i]]&&!swapped[a[a[i]]]&&!done)
		{
			swap(a[i], a[a[i]]);
			swapped[a[i]] = true;
			swapped[a[a[i]]] = true;
			ans++;
			done = true;
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