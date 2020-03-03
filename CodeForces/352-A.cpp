#include <bits/stdc++.h>

using namespace std;

int main()
{
	int numberOfCards, cardNumber, numberOf0s = 0, numberOfFives=0 ;
	cin>>numberOfCards ;
	for( int i = 0 ; i<numberOfCards ; i++ )
	{
		cin>>cardNumber ;
		if( cardNumber==0 )	numberOf0s++ ;
		else numberOfFives++ ;
	}

	numberOfFives = numberOfFives - numberOfFives%9 ;

	if( numberOf0s>0 && numberOfFives>0 )
	{
		for( int i = 0; i<numberOfFives; i++ )
		{
			cout<<5 ;
		}
		for( int i = 0; i<numberOf0s; i++ )
		{
			cout<<0 ;
		}
	}
	else
	{
		if( numberOf0s==0 )	cout<<-1 ;
		else cout<<0 ;
	}
    return 0 ;
}