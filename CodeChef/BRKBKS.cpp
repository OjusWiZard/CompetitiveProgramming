#include <iostream>
using namespace std;

int main() {
	int t, s, w[3] ;
	cin>>t ;
	while( t-- )
	{
	    cin>>s>>w[0]>>w[1]>>w[2] ;
	    if( s >= w[1]+w[2]+w[0] )    cout<<1 ;
	    else if( w[0]+w[1]<=s || w[1]+w[2]<=s )
	    {
	        cout<<2 ;
	    }
	    else    cout<<3 ;
	    cout<<endl ;
	}
	return 0;
}
