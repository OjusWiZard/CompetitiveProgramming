#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool multiple=0 ;
    unsigned long long int town, n, tme, lt=1000000001 ;
    cin>>n ;
    for( unsigned long long int i=0 ; i<n ; i++)
    {
      cin>>tme ;
      if(tme<lt)
      {
        lt = tme ;
        town = i+1 ;
        multiple = 0 ;
      }
      else if(tme==lt) multiple=1 ;
    }
    if(multiple) cout<<"Still Rozdil" ;
    else cout<<town ;
    
    return 0;
}