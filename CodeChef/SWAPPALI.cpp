#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, swaps=0 ;
		string s ;
		cin>>n>>s ;
		bool cool=1, leftAvailable=1, rightAvailable=1 ;

		for( int l=0, r=n-1; l<r; l++, r-- )
		{
			if( s[l]==s[r] )
			{
				leftAvailable = 1 ;
				rightAvailable = 1 ;
				continue ;
			}
			if( l+1==r )
			{
				cool = 0 ;
				break ;
			}
			else if( s[l] == s[r-1] && rightAvailable )
			{
				swap( s[r], s[r-1] ) ;
				rightAvailable = 0 ;
				leftAvailable = 1 ;
				swaps++ ;
			}
			else if( s[l+1] == s[r] && leftAvailable )
			{
				swap( s[l+1], s[l] ) ;
				leftAvailable = 0 ;
				rightAvailable = 1 ;
				swaps++ ;
			}
			else
			{
				cool = 0 ;
				break ;
			}
		}

		if( cool )	cout<<"YES"<<endl<<swaps<<endl ;
		else		cout<<"NO"<<endl ;

	}

	return 0;
}