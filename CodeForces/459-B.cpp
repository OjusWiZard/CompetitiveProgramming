#include <bits/stdc++.h>

using namespace std;

int main()
{
	long int flowers, beauty[200000], left=0, right=0, difference, i ;
	bool change=0 ;
	cin>>flowers ;
	for( long int i = 0; i<flowers; i++ )
	{
		cin>>beauty[i] ;
	}

	sort( beauty, beauty+flowers ) ;
	difference = beauty[flowers-1]-beauty[0] ;

	i = 0 ;
	if( i<flowers-1 )
	{
		while( beauty[i]==beauty[i+1] )
		{
			left++ ;
			i++ ;
		}
	}
	
	i = flowers-1 ;
	if( i>0 )
	{
		while( i>0&&beauty[i]==beauty[i-1] )
		{
			right++ ;
			i-- ;
		}
	}
	//cout<<left<<" "<<flowers-1-right<<" "<<beauty[left]<<" "<<beauty[flowers-1-right]<<endl ;
	if( beauty[left]==beauty[flowers-1-right] )	cout<<difference<<" "<<( long long int )left*( left+1 )/2 ;
	else										cout<<difference<<" "<<( long long int )(left+1)*(right+1) ;

	return 0 ;
}