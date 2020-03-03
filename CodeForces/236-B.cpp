#include <bits/stdc++.h>

using namespace std;

int numberOfDivisors( int n )
{
	int i = 2, num = 1 ;
	while( n!=1 )
	{
		if( n%i==0 )
		{
			int k = 0 ;
			while( n%i==0 )
			{
				n /= i ;
				k++ ;
			}
			num *= k+1 ;
			//cout<<num<<" "<<n<<" "<<i<<" " ;
		}
		i++ ;
	}
	return num ;
}

int main()
{
	int sum = 0, a, b, c ;
	cin>>a>>b>>c ;
	for( int i = 1; i<=a; i++ )
	{
		for( int j = 1; j<=b; j++ )
		{
			for( int k = 1; k<=c; k++ )
			{
				sum += numberOfDivisors( i*j*k ) ;
			}
		}
	}
	cout<<sum ;
	return 0 ;
}