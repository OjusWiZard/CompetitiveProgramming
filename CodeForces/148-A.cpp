#include <iostream>

using namespace std;

int main()
{
    int k, l, m, n, d, total=0 ;
    cin>>k>>l>>m>>n>>d ;
    while( d )
    {
        if( !( d%k && d%l && d%m && d%n ) ) total++ ;
        d-- ;
    }
    cout<<total ;
    return 0 ;
}