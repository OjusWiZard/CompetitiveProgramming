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
		int n, fives=0, tens=0, fifteens=0, sold=0 ;
		cin>>n ;
		queue<int> a ;
		while( n-- )
		{
			int p ;
			cin>>p ;
			a.push( p ) ;
		}
		while( !a.empty() )
		{
			if( a.front()==5 )	fives++ ;
			else if( a.front()==10 )
			{
				if( fives>0 )
				{
					tens++ ;
					fives-- ;
				}
				else break ;
			}
			else if( a.front()==15 )
			{
				if( tens>0 )
				{
					tens-- ;
					fifteens++ ;
				}
				else if( fives>1 )
				{
					fifteens++ ;
					fives -= 2 ;
				}
				else break ;
			}
			a.pop() ;
		}
		if( a.empty() )	cout<<"YES\n" ;
		else cout<<"NO\n" ;
	}

	return 0 ;
}