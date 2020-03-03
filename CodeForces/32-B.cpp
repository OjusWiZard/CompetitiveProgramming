#include <iostream>
using namespace std;

int main() {
	char str[200], out[200];
	int j=0   ;
	cin>>str;
	for( int i=0 ; str[i]=='.'||str[i]=='-' ; i++ )    {
	    if( str[i] == '.')  {
	        out[j] = '0' ; 
	        j++ ;
	    }
	    else if( str[i]=='-' )  {
	        if( str[i+1]=='.' )  {
	            out[j] = '1' ;
	            j++ ;
	            i++ ;
	        }
	        else if( str[i+1]=='-' )    {
	            out[j] = '2' ;
	            j++ ;
	            i++ ;
	        }
	    }
	}
	out[j]='\0'   ;
	cout<<out;
	return 0;
}