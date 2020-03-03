#include <iostream>

using namespace std;

int main()
{
    int n, sum=0, p ;
    cin>>n ;
    int tn=n ;
    while( tn-- )
    {
        cin>> p ;
        sum += p ;
    }
    cout<<((float)sum/(float)n) ;
    return 0 ;
}