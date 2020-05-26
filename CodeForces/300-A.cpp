#include <bits/stdc++.h>

using namespace std;

void print( vector<int> &v )
{
	cout<<v.size()<<" " ;
	for( int i = 0; i<v.size(); i++ )
	{
		cout<<v[i]<<" " ;
	}
	cout<<"\n" ;
}

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n ;
	cin>>n ;

	vector<int> zeros, negs, poss ;
	for( int i = 0; i<n; i++ )
	{
		int a ;
		cin>>a ;
		if( a<0 )	negs.push_back( a ) ;
		else if( a>0 ) poss.push_back( a ) ;
		else zeros.push_back( a ) ;
	}

	if( poss.size()==0 )
	{
		poss.push_back( negs[negs.size()-1] ) ;
		negs.pop_back() ;
		poss.push_back( negs[negs.size()-1] ) ;
		negs.pop_back() ;
		if( negs.size()%2==0 )
		{
			zeros.push_back( negs[negs.size()-1] ) ;
			negs.pop_back() ;
		}

		print( negs ) ;
		print( poss ) ;
		print( zeros ) ;
	}
	else
	{
		if( negs.size()%2==0 )
		{
			zeros.push_back( negs[negs.size()-1] ) ;
			negs.pop_back() ;
		}
		print( negs ) ;
		print( poss ) ;
		print( zeros ) ;
	}

	return 0 ;
}