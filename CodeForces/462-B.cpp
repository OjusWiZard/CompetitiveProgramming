#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	struct yeet
	{
		int f = 0 ;
		bool operator<( const yeet& b )
		{
			return this->f>b.f ;
		}
	};
	vector<yeet> chrs( 26 ) ;
	int n, k ;
	cin>>n>>k ;

	for( int i = 0; i<n; i++ )
	{
		char ch ;
		cin>>ch ;
		chrs[ch-'A'].f++ ;
	}
	sort( chrs.begin(), chrs.end() ) ;

	unsigned long long int sum = 0 ;

	int j = 0 ;
	while( true )
	{
		if( k>=chrs[j].f )
		{
			sum += (unsigned long long int)(chrs[j].f)*(chrs[j].f) ;
			k -= chrs[j].f ;
			j++ ;
		}
		else
		{
			sum += (unsigned long long int)k*k ;
			break ;
		}
	}
	cout<<sum ;

	return 0 ;
}