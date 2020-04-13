#include <bits/stdc++.h>
using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int factors = 1 ;
		int numberOfFactors, numberOfPrimeFactors ;
		cin>>numberOfFactors>>numberOfPrimeFactors ;
		for( int i = 2 ; factors<numberOfPrimeFactors&&numberOfFactors>1&&i<sqrt(numberOfFactors); )
			{
				if( numberOfFactors%i==0 )
				{
					numberOfFactors = numberOfFactors/i ;
					factors++ ;
				}
				else i++ ;
			}
		if( factors==numberOfPrimeFactors )	cout<<1<<"\n" ;
		else cout<<0<<"\n" ;
	}

	return 0 ;
}