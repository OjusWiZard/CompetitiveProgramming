#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int x1, y1, x2, y2 ;
	cin>>x1>>y1>>x2>>y2 ;

	if( x1==x2 )
	{
		if( abs( y2-y1 )+x1>1000 )	cout<<x1-abs( y2-y1 )<<" "<<y1<<" "<<x2-abs( y2-y1 )<<" "<<y2 ;
		else						cout<<x1+abs( y2-y1 )<<" "<<y1<<" "<<x2+abs( y2-y1 )<<" "<<y2 ;
	}
	else if( y1==y2 )
	{
		if( abs( x2-x1 )+y1>1000 )	cout<<x1<<" "<<y1-abs( x2-x1 )<<" "<<x2<<" "<<y2-abs( x2-x1 ) ;
		else						cout<<x1<<" "<<y1+abs( x2-x1 )<<" "<<x2<<" "<<y2+abs( x2-x1 ) ;
	}
	else if( abs( y2-y1 )==abs( x2-x1 ) )
	{
		cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1 ;
	}
	else cout<<-1 ;
	
	return 0 ;
}