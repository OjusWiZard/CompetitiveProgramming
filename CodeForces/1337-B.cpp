#include<bits/stdc++.h>

using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
    cin>>t ;
    while (t--)
    {
        int x, n, m ;
        cin>>x>>n>>m ;

        for (int i = 0; i < n; i++)
        {
            x = x/2 ;
            x += 10 ;
        }
        
        if( x-(10*m)<=0 )   cout<<"YES\n" ;
        else    cout<<"NO\n" ;
    }
	return 0;
}