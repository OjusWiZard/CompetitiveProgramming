#include <iostream>

using namespace std;

int main()
{
    int n, lo=0, ro=0, s, t ;
    cin>>n ;
    int tn=n ;
    while( tn-- )
    {
        cin>>s ;
        if(s) lo++ ;
        cin>>s ;
        if(s) ro++ ;
    }
    if( lo <= n/2 )  t = lo   ;
    else             t = n-lo ;
    if( ro <= n/2 )  t+= ro   ;
    else             t+= n-ro ;
    cout<<t ;
    return 0 ;
}