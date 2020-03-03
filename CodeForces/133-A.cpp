#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char p[100] ;
    int i, yes=0 ;
    //for( i=0 ; i<100 ; i++ ) p[i]='0' ;
    gets(p) ;
    for( i=0 ; i<strlen(p) ; i++ )
    {
        //cout<<p[i] ;
        if( p[i]=='H' || p[i]=='Q' || p[i]=='9' )
        {
            yes=1 ;
            //cout<<endl<<p[i] ;
        }
    }
    if( yes ) cout<<"YES" ;
    else      cout<<"NO"  ;
    return 0 ;
}