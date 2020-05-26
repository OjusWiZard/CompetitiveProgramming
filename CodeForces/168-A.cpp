#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, x, y ;
	cin>>n>>x>>y ;

	if( (n*y)%100==0 )	cout<<max(0,(n*y/100)-x) ;
	else cout<<max(0,(n*y/100)-x+1) ;

	return 0 ;
}