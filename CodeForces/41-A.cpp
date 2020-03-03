#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s, t, isCorrect = "YES" ;
	cin>>s>>t ;
	for( int i = 0 ; i<s.length() ; i++ )
	{
		if( s[i]!=t[t.length()-1-i] )	isCorrect = "NO" ;
	}
	cout<<isCorrect ;
    return 0 ;
}