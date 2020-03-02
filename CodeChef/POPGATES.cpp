#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, k, heads = 0, tails = 0 ;
		char coin[100] ;
		bool flipped = 1 ;
		cin>>n>>k ;

		for( int i = 0; i<n; i++ )
		{
			cin>>coin[i] ;
			if( coin[i]=='H' )	heads++ ;
			else tails++ ;
		}

		for( int i = 0, j = n-1; i<k; i++, j-- )
		{
			if( flipped )
			{
				if( coin[j]=='H' )
				{
					heads-- ;
					flipped = !flipped ;
				}
				else
				{
					tails-- ;
				}
			}
			else
			{
				if( coin[j]=='T' )
				{
					tails-- ;
					flipped = !flipped ;
				}
				else
				{
					heads-- ;
				}
			}
		}

		if( flipped )	cout<<heads<<endl ;
		else			cout<<tails<<endl ;
	}

	return 0;
}