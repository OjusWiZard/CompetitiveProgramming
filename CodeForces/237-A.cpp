#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, mx = 1, streak = 1, ph, pm ;
	cin>>n ;
	n-- ;
	cin>>ph>>pm ;
	while( n-- )
	{
		int h, m ;
		cin>>h>>m ;
		if( h==ph&&m==pm )	streak++ ;
		else streak = 1 ;
		mx = max( mx, streak ) ;
		ph = h ;
		pm = m ;
	}
	cout<<mx ;

	return 0 ;
}