#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int t;
	cin>>t;
	while( t-- )
	{
		int r, c ;
		cin>>r>>c ;

		if( r==c )
		{
			if( r==1 )
			{
				cout<<16<<"\n" ;
				cout<<8<<" "<<8<<"\n" ;
			}
			else if( r==8 )
			{
				cout<<16<<"\n" ;
				cout<<1<<" "<<1<<"\n" ;

			}
			else
			{
				cout<<17<<"\n" ;
				cout<<1<<" "<<1<<"\n" ;
				cout<<8<<" "<<8<<"\n" ;
			}

			cout<<7<<" "<<7<<"\n" ;
			cout<<6<<" "<<8<<"\n" ;
			cout<<1<<" "<<3<<"\n" ;
			cout<<3<<" "<<1<<"\n" ;
			cout<<8<<" "<<6<<"\n" ;
			cout<<7<<" "<<5<<"\n" ;
			cout<<8<<" "<<4<<"\n" ;
			cout<<5<<" "<<1<<"\n" ;
			cout<<1<<" "<<5<<"\n" ;
			cout<<4<<" "<<8<<"\n" ;
			cout<<3<<" "<<7<<"\n" ;
			cout<<2<<" "<<8<<"\n" ;
			cout<<1<<" "<<7<<"\n" ;
			cout<<7<<" "<<1<<"\n" ;
			cout<<8<<" "<<2<<"\n" ;
		}

		else
		{
			cout<<18<<"\n" ;
			cout<<(r+c)/2<<" "<<(r+c)/2<<"\n" ;
			cout<<1<<" "<<1<<"\n" ;
			cout<<8<<" "<<8<<"\n" ;
			cout<<7<<" "<<7<<"\n" ;
			cout<<6<<" "<<8<<"\n" ;
			cout<<1<<" "<<3<<"\n" ;
			cout<<3<<" "<<1<<"\n" ;
			cout<<8<<" "<<6<<"\n" ;
			cout<<7<<" "<<5<<"\n" ;
			cout<<8<<" "<<4<<"\n" ;
			cout<<5<<" "<<1<<"\n" ;
			cout<<1<<" "<<5<<"\n" ;
			cout<<4<<" "<<8<<"\n" ;
			cout<<3<<" "<<7<<"\n" ;
			cout<<2<<" "<<8<<"\n" ;
			cout<<1<<" "<<7<<"\n" ;
			cout<<7<<" "<<1<<"\n" ;
			cout<<8<<" "<<2<<"\n" ;
		}

	}
}