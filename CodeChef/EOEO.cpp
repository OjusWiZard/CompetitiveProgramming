#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		long long ts, wins=0 ;
		cin>>ts ;
		while( ts%2==0 )
		{
			ts /= 2 ;
		}
		cout<<(ts-1)/2<<"\n" ;
	}

	return 0 ;
}