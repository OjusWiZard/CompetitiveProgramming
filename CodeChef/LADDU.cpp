#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;
    
	int t ;
	cin>>t ;
	while( t-- )
	{
		int acts, laddus=0 ;
		string origin ;
		cin>>acts>>origin ;
		while( acts-- )
		{
			string str ;
			cin>>str ;
			if( str=="CONTEST_WON" )
			{
				int rank ;
				cin>>rank ;
				laddus += max(300,320-rank) ;
			}
			else if( str=="TOP_CONTRIBUTOR" )
			{
				laddus += 300 ;
			}
			else if( str=="BUG_FOUND" )
			{
				int sev ;
				cin>>sev ;
				laddus += sev ;
			}
			else
			{
				laddus += 50 ;
			}
		}
		if( origin=="INDIAN" )	cout<<laddus/200<<"\n" ;
		else					cout<<laddus/400<<"\n" ;
	}

	return 0 ;
}