#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t ;
	cin>>t ;
	while( t-- )
	{
		int i, n, a, b, l=0, maxL=0, minL=11 ;
		cin>>n ;
		cin>>a ;
		for( i = 1; i<n; i++ )
		{
			cin>>b ;
			if( b-a>2 )
			{
				maxL = max( maxL, i-l ) ;
				minL = min( minL, i-l ) ;
				l = i ;
			}
			a = b ;
		}
		maxL = max( maxL, i-l ) ;
		minL = min( minL, i-l ) ;
		if( l==0 )
		{
			maxL = minL = n ;
		}
		cout<<minL<<" "<<maxL<<"\n" ;
	}

	return 0;
}