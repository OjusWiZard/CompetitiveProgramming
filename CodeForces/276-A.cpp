#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	long long int n, k, maxJoy= -9223372036854775807 ;
	cin>>n>>k ;

	for( long long int i = 0; i<n; i++ )
	{
		int f, t ;
		cin>>f>>t ;
		if( t<=k )
		{
			if( f>maxJoy )	maxJoy = f ;
		}
		else
		{
			if( (f+k-t)>maxJoy )	maxJoy = f+k-t ;
		}
	}
	cout<<maxJoy ;

	return 0 ;
}