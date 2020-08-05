#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int n;
	cin >> n;
	int w[n];
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
	}

	sort(w, w + n);

	int maxW = (int)(n>1);
	for (int s = 1; s <= 2*n; s++)
	{
		int l = 0, r = n - 1, thisW = 0;
		while (l<r)
		{
			if(w[l]+w[r]<s)
				l++;
			else if(w[l]+w[r]>s)
				r--;
			else
			{
				thisW++;
				l++;
				r--;
			}
		}
		maxW = max(maxW, thisW);
	}

	cout << maxW << "\n";
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