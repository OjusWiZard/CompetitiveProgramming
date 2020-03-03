#include <iostream>
using namespace std ;
int main() {
    int t, i, count[10]={0,0,0,0,0,0,0,0,0,0}, atc ;
    unsigned long int n, weapon[10]={0,0,0,0,0,0,0,0,0,0} ;
    char wi[10] ;
    cin>>t ;
    atc=t ;
    while( t-- )
    {
        cin>>n ;
        while( n-- )
        {
            cin>>wi ;
            for( i=0 ; i<10 ; i++ )
            {
                if( wi[i]=='1' ) weapon[i]++ ;
            }
        }
        for( i=0 ; i<10 ; i++ )
        {
            if( weapon[i]%2 != 0 ) count[atc-t-1]++ ;
            weapon[i]=0 ;
        }
    }
    for( i=0 ; i<atc ; i++ )
    {
        cout<<count[i]<<endl ;
    }
    return 0;
}