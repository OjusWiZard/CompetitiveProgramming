#include<bits/stdc++.h>

using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, k, max=0, l=1 ;
		cin>>n>>k ;
		vector<int> a( n ) ;
		vector<bool> peaks(n , 0) ;

		for( int i = 0; i<n; i++ )
		{
			cin>>a[i] ;
		}

		for( int i = 1; i<n-1; i++ )
		{
			if( a[i-1]<a[i]&&a[i]>a[i+1] )	peaks[i] = 1 ;
		}

		int totalPeaks=0 ;
		for( int i = 1; i<k-1; i++ )
		{
			if( peaks[i] )
			{
				totalPeaks++ ;
				max++ ;
			}
		}
		if( peaks[1] )	totalPeaks-- ;
		for( int j = k-1, i=2; j<n-1; j++, i++ )
		{
			if( peaks[j] )	totalPeaks++ ;
			if( totalPeaks>max )
			{
				max = totalPeaks ;
				l = i ;
			}
			if( peaks[i] )	totalPeaks-- ;
		}
		cout<<max+1<<" "<<l<<"\n" ;
	}

	return 0;
}