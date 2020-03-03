#include <bits/stdc++.h>

using namespace std;

int main()
{
	string number ;
	int i ;
	cin>>number ;

	i = number.find( '0' ) ;
	if( i!=-1 ) number.erase( number.begin()+i ) ;
	else		number.pop_back() ;
	cout<<number ;

	return 0 ;
}