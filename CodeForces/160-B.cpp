#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, firstHalf[100], secondHalf[100] ;
	bool unlucky = 1 ;
	string ticket ;
	cin>>n ;
	cin>>ticket ;

	for( int i = 0; i<n; i++ )	firstHalf[i] = ticket[i]-'0' ;
	for( int i = 0; i<n; i++ )	secondHalf[i] = ticket[i+n]-'0' ;

	sort( firstHalf , firstHalf +n ) ;
	sort( secondHalf, secondHalf+n ) ;

	for( int i = 0; i<n; i++ )
	{
		//cout<<firstHalf[i]<<" "<<secondHalf[i]<<endl ;
		if( ( firstHalf[0]-secondHalf[0] )*( firstHalf[i]-secondHalf[i])<=0 )
		{
			unlucky = 0 ;
			//cout<<firstHalf[i]<<" "<<secondHalf[i]<<endl ;
		}
	}

	if( unlucky )	cout<<"YES" ;
	else cout<<"NO" ;

	return 0 ;
}