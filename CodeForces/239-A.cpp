#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, y, k ;
	bool found=0 ;
	cin>>y>>k>>n ;

	for( int i = k*((y/k)+1); i<=n; i+=k )
	{
		cout<<i-y<<" " ;
		found = 1 ;
	}
	if( !found )	cout<<-1 ;

	return 0 ;
}