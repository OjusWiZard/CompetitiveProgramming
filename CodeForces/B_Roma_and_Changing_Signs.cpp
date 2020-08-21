#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int n, k, minA = INT_MAX;
	long long sum = 0;
	cin>>n>>k;
	int a[n];
	for (int i = 0; i<n; i++)
	{
		cin>>a[i];
		sum += a[i];
		minA = min(abs(a[i]), minA);
	}

	int i = 0;
	while ((k)&&(a[i]<0))
	{
		a[i] *= -1;
		k--;
		sum += a[i++]*2;
	}
	if ((k)&&(k%2))
		sum -= 2*minA;

	cout<<sum;
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