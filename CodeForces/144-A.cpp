#include <iostream>

using namespace std;

int main()
{
    int n=0, tn, max=0, min=101, posmax=0, posmin=0, h;
    cin>>n ;
    tn=n ;
    while( tn-- )
    {
        cin>>h ;
        if( h>max )
        {
            max=h;
            posmax = n-tn ;
        }
        if( h<=min )
        {
            min=h ;
            posmin = n-tn ;
        }
    }
    //cout<<max<<" "<<posmax<<endl<<min<<" "<<posmin ;
    if( posmax<posmin ) cout<<endl<<posmax-1 + n-posmin ;
    else                cout<<endl<<posmax-2 + n-posmin ;
        return 0 ;
}