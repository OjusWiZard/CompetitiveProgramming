#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char temp, c[100] ;
    int n, tn ;
    cin>>c ;
    n = strlen(c) ;
    n=n/2 ;
    n++ ;
    tn = n ;
    while(tn--)
    {
        for( int i=0; i<n-1 ; i++ )
        {
            if( c[i*2] > c[(i+1)*2] )
            {
                temp = c[i*2] ;
                c[i*2] = c[(i+1)*2] ;
                c[(i+1)*2] = temp ;
            }
        }
    }
    cout<<c ;
    return 0 ;
}