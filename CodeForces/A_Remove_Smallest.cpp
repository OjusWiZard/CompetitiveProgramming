#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);

	bool yes = true;
	for (int i = 0; i < n-1; i++)
	{
		if(abs(a[i]-a[i+1])>1)
			yes = false;
	}

	cout << (yes ? "YES\n" : "NO\n");
}

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin >> t ;
	while( t-- )
		solve();
}