#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str ;
	cin>>str ;

	for( int i = 0; i<str.length() ;)
	{
		if( str[i]>64&&str[i]<91 )
		{
			str[i] += 32 ;
		}
		if( str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y'&&
			str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'&&str[i]!='Y' )
		{
			str.insert( i, "." ) ;
			i++ ;
		}
		if( str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y'||
			str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y' )
		{
			str.erase( str.begin()+ i ) ;
			i-- ;
		}
		i++ ;
		//cout<<i<<" "<<str<<endl ;
	}

	cout<<str ;

	return 0 ;
}