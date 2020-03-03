#include <iostream>

using namespace std;

int main() {
	int year, dig[4], t    ;    ;
	cin>>year   ;
	while( year++ )   {
	    t = year ;
	    for( int i=0 ; i<4 ; i++ )    {
	        dig[i] = t%10    ;
	        t = t/10    ;
	    }
	if(   dig[0]!=dig[1]
	    &&dig[0]!=dig[2]
	    &&dig[0]!=dig[3]
	    &&dig[1]!=dig[2]
	    &&dig[1]!=dig[3]
	    &&dig[2]!=dig[3] )  {
	        break   ;
	    }
	}
	cout<<year  ;
	return 0;
}