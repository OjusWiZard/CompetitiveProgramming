#include <bits/stdc++.h>

using namespace std;

int main()
{
	string word ;
	int h, e, l1, l2, o ;
	cin>>word ;
	h = word.find_first_of( "h" ) ;
	word.erase( 0, h+1 ) ;
	//cout<<word<<" " ;
	e = word.find_first_of( "e" ) ;
	word.erase( 0 , e+1 ) ;
	//cout<<word<<" " ;
	l1 = word.find_first_of( "l" ) ;
	word.erase( 0 , l1+1 ) ;
	//cout<<word<<" " ;
	l2 = word.find_first_of( "l" ) ;
	word.erase( 0 , l2+1 ) ;
	//cout<<word<<" " ;
	o = word.find_first_of( "o" ) ;
	//cout<<word<<" " ;

	if( h!=-1&&e!=-1&&l1!=-1&&l2!=-1&&o!=-1 )	cout<<"YES" ;
	else										cout<<"NO" ;

	return 0 ;
}