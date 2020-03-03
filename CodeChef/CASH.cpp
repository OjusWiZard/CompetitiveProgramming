#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long int n, k, a[100000] ;
    long long int rem ;
    cin>>t ;
    while( t-- )
    {
        rem = 0 ;
        cin>>n>>k ;
        for( long int i = 0; i<n; i++ )
        {
            cin>>a[i] ;
            rem += a[i]%k ;
            a[i] = a[i]-a[i]%k ;
        }

        cout<<rem%k<<endl ;
    }
    return 0;
}