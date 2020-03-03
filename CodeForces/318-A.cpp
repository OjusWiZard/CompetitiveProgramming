#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int n, k ;
    cin>>n>>k ;
    if(n%2)
    {
      if(k<=(n+1)/2) cout<<2*k-1 ;
      else cout<<2*k-n-1 ;
    }
    else
    {
      if(k<=n/2) cout<<2*k-1 ;
      else cout<<2*k-n ;
    }
    return 0;
}