#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	string A, B, Normal ;
	cin>>A>>B ;
	Normal = to_string( stoi( A )+stoi( B ) ) ;

	while( A.find( '0' )!=string::npos )	A.erase(A.find('0')+A.begin()) ;
	while( B.find( '0' )!=string::npos )	B.erase(B.find('0')+B.begin()) ;
	while( Normal.find( '0' )!=string::npos )	Normal.erase(Normal.find('0')+Normal.begin()) ;

	if( stoi( Normal )==stoi( A )+stoi( B ) )	cout<<"YES" ;
	else cout<<"NO" ;

	return 0 ;
}