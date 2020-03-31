#include<bits/stdc++.h>

using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int a, b, c, d, x, y, x1, y1, x2, y2 ;
		cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2 ;

		if( x+b-a<=x2&&x+b-a>=x1&&y+d-c<=y2&&y+d-c>=y1&&( ( a!=0||b!=0 )?(x2-x>0||x-x1>0):1 )&&( ( c!=0||d!=0 )?(y2-y>0||y-y1>0):1 ) )	cout<<"YES\n" ;
		else cout<<"NO\n" ;

	}

	return 0;
}