#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n ;
	cin>>n ;
	vector<int> budget( n ) ;
	for( int i = 0; i<n; i++ )
	{
		cin>>budget[i] ;
	}
	sort( budget.begin(), budget.end() ) ;
	unsigned long long maxRevenue = 0 ;
	for( int i = 0, customers=n ; i<n; i++, customers-- )
	{
		if( (unsigned long long)customers*budget[i]>maxRevenue )	maxRevenue = (unsigned long long)customers*budget[i] ;
	}
	cout<<maxRevenue<<"\n" ;

	return 0 ;
}