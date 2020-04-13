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
		int i, j, n ;
		cin>>n ;
		if( n<7 )
		{
			switch( n )
			{
				case 1:	cout<<"1\n"<<"1 1\n" ;		break ;
				case 2:	cout<<"1\n"<<"2 1 2\n" ;	break ;
				case 3:	cout<<"1\n"<<"3 1 2 3\n" ;	break ;
				case 4: cout<<"2\n"<<"2 1 2\n"<<"2 3 4\n" ;	break ;
				case 5: cout<<"2\n"<<"3 1 2 5\n"<<"2 3 4\n" ;	break ;
				case 6: cout<<"3\n"<<"2 1 2\n"<<"2 3 4\n"<<"2 5 6\n" ;	break ;
			}
			continue ;
		}
		switch( n%4 )
		{
			case 0:	cout<<n/2<<"\n" ;
					i = 1; j=3 ;
					while( i<n && j<n )
					{
						cout<<2<<" "<<i<<" "<<i+1<<"\n" ;
						i += 4 ;
						cout<<2<<" "<<j<<" "<<j+1<<"\n" ;
						j += 4 ;
					}
					break ;
			case 1: cout<<n/2<<"\n" ;
					i = 5 ; j = 7 ;
					cout<<"3 1 2 "<<n<<"\n"<<"2 3 4\n" ;
					while( i<n&&j<n )
					{
						cout<<2<<" "<<i<<" "<<i+1<<"\n" ;
						i += 4 ;
						cout<<2<<" "<<j<<" "<<j+1<<"\n" ;
						j += 4 ;
					}
					break ;
			case 2: cout<<n/2<<"\n" ;
					i = 1; j = 3 ;
					while( i+2<n&&j<n )
					{
						cout<<2<<" "<<i<<" "<<i+1<<"\n" ;
						i += 4 ;
						cout<<2<<" "<<j<<" "<<j+1<<"\n" ;
						j += 4 ;
					}
					cout<<2<<" "<<i<<" "<<i+1<<"\n" ;
					break ;
			case 3: cout<<n/2<<"\n" ;
					i = 5 ; j = 3 ;
					cout<<"3 1 2 "<<n<<"\n" ;
					while( i<n&&j<n )
					{
						cout<<2<<" "<<i<<" "<<i+1<<"\n" ;
						i += 4 ;
						cout<<2<<" "<<j<<" "<<j+1<<"\n" ;
						j += 4 ;
					}
					break ;
		}
	}
	return 0 ;
}