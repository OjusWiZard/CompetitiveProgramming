#include <bits/stdc++.h>

using namespace std ;
typedef	long long ll ;
ll luck[1024];
ll f( int n )
{
	if( n==0 )
		return 0;
	int i;
	ll ans = 0;
	for( int i = 1; i<=1024; i++ )
	{
		if( luck[i]<n )
		{
			ans += luck[i]*(luck[i]-luck[i-1]);
		}
		else
		{
			ans += luck[i]*(n-luck[i-1]);
			break;
		}
	}
	return ans;
}
int main()
{
	luck[1] = 4;
	luck[2] = 7;
	int t = 3;
	for( int i = 1; i<512; i++ )
	{
		luck[t++] = luck[i]*10+4;
		luck[t++] = luck[i]*10+7;
	}
	int l, r;
	cin>>l>>r ;
	cout<<f( r )-f( l-1 ) ;
	return 0;
}