#include <bits/stdc++.h>

using namespace std;

int main()
{
	string situation ;
	bool danger = 0 ;

	cin>>situation ;
	if( situation.find( "0000000" )!=4294967295 || situation.find( "1111111" )!=4294967295 )	danger = 1 ;
	//cout<<situation.find( "0000000" )<<" "<<situation.find( "1111111" )<<endl ;

	if( danger )	cout<<"YES" ;
	else			cout<<"NO" ;

	return 0 ;
}