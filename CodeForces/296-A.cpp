#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, numbers[1000] = {}, num, maxFrequency = 0 ;
	cin>>n ;
	for( int i = 0; i<n; i++ )
	{
		cin>>num ;
		numbers[num-1]++ ;
	}
	for( int i = 0; i<1000; i++ )
	{
		if( numbers[i]>maxFrequency )	maxFrequency = numbers[i] ;
	}

	if( n%2 )
	{
		if( maxFrequency<=( n+1 )/2 )	cout<<"YES" ;
		else	cout<<"NO" ;
	}
	else
	{
		if( maxFrequency<=n/2 )	cout<<"YES" ;
		else	cout<<"NO" ;
	}

	return 0 ;
}