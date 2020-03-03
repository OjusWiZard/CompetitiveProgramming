#include <iostream>

using namespace std;

int main()
{
    int t, p, max, min, amazing=0 ;
    cin>>t ;
    cin>>p ;
    t-- ;
    max=p ;
    min=p ;
    while( t-- )
    {
        cin>>p ;
        if(p>max)
        {
            max=p ;
            amazing++ ;
        }
        else if( p<min )
        {
            min=p ;
            amazing++ ;
        }
    }
    cout<<amazing ;
    return 0 ;
}