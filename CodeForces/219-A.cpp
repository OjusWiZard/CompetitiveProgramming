#include <bits/stdc++.h>

using namespace std;

int main()
{
	struct useful
	{
		char ch= 'a' ;
		int freq = 0 ;
	};
	useful usefulChars[26] ;
	string s ;
	//char c ;
	int i, j = 0, length, k, freq[26] = {}, totalUsefulChars = 0 ;
	cin>>k ;
	cin>>s ;
	length = s.length() ;
	for( int i = 0; i<length; i++ )
	{
		freq[s[i]-'a']++ ;
		//cout<<freq[s[i]-'a']<<" "<<s[i]<<" found"<<endl ;
	}
	for( int i = 0; i<26; i++ )
	{
		if( freq[i]%k == 0 )
		{
			usefulChars[j].ch = 'a'+i ;
			usefulChars[j].freq = freq[i] ;
			totalUsefulChars += freq[i] ;
			j++ ;
		}
	}
	if( totalUsefulChars<length )	cout<<-1<<endl ;
	else
	{
		i = 0 ;
		while( totalUsefulChars )
		{
			/*cout<<usefulChars[i].ch ;
			usefulChars[i].freq-- ;
			i++ ;
			if( i==j ) i = 0 ;*/
			for( int t = 0; t<usefulChars[i].freq/k; t++ )
			{
				cout<<usefulChars[i].ch ;
				//usefulChars[i].freq-- ;
				totalUsefulChars-- ;
			}
			i++ ;
			if( i==j )	i = 0 ;
		}
	}

	return 0 ;
}