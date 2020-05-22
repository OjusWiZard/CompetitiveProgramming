#include<bits/stdc++.h>

using namespace std ;

bool comp( pair<int,int> a, pair<int,int> b )
{
    if( a.first!=b.first ) return a.first>b.first ;
    else return a.second<b.second ;
}

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, k ;
    cin>>n>>k ;
    k-- ;

    vector< pair<int,int> > score(n) ;

    for( int i=0 ; i<n ; i++ )
    {
        cin>>score[i].first>>score[i].second ;
    }

    sort( score.begin(), score.end(), comp ) ;

    int left=k, right=k ;
    while (score[k]==score[left])
    {
        left-- ;
        if( left==-1 ) break ;
    }
    while (score[k]==score[right])
    {
        right++ ;
        if( right==n ) break ;
    }
    
    cout<<right-left-1 ;

	return 0;
}