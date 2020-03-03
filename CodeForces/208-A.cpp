#include <bits/stdc++.h>

using namespace std;

int main()
{
	string dubstep, song ;
	char previous ;
	int i = 0, j = 0 ;
	cin>>dubstep ;
	while( dubstep[i]=='W'&&dubstep[i+1]=='U'&&dubstep[i+2]=='B' )
	{
		/*dubstep[i] = dubstep[i+1] = dubstep[i+2] = (char)0 ;
		i += 3 ;*/
		//cout<<i<<" " ;
		dubstep.erase( dubstep.begin() ) ;
		dubstep.erase( dubstep.begin() ) ;
		dubstep.erase( dubstep.begin() ) ;
	}
	/*while( dubstep.find( "WUB" ) != -1 )
	{
		i = dubstep.find( "WUB" ) ;
		//cout<<i<<" " ;
		dubstep[i] = dubstep[i+1] = dubstep[i+2] = ' ' ;
		while(  )
	}*/
	//cout<<dubstep ;
	i = dubstep.length()-1 ;
	while( dubstep[i]=='B'&&dubstep[i-1]=='U'&&dubstep[i-2]=='W' )
	{
		/*dubstep[i] = dubstep[i-1] = dubstep[i-2] = (char)0 ;
		i -= 3 ;*/
		dubstep.pop_back() ;
		dubstep.pop_back() ;
		dubstep.pop_back() ;
		i -= 3 ;
	}
	dubstep.shrink_to_fit() ;
	//cout<<dubstep<<endl ;
	for( int i = 0; i<dubstep.length(); i++ )
	{
		if( dubstep[i]=='W'&&dubstep[i+1]=='U'&&dubstep[i+2]=='B' )
		{
			if( song[song.length()-1] != ' ' )	song.push_back( ' ' ) ;
			dubstep.erase( dubstep.begin()+i ) ;
			dubstep.erase( dubstep.begin()+i ) ;
			dubstep.erase( dubstep.begin()+i ) ;
			i-- ;
		}
		else
		{
			song.push_back( dubstep[i] ) ;
		}
	}
	cout<<song ;

	return 0 ;
}