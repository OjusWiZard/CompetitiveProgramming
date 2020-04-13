#include <bits/stdc++.h>
using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	class question
	{
		int answer ;
		public :
		question( int ans )
		{
			this->answer = ans ;
		}
		int getAnswer( void )
		{
			return this->answer ;
		}
	};
	class paperset
	{
		vector<question> ques ;
		public :
		void addQuestion( int ans )
		{
			question q( ans ) ;
			this->ques.push_back( q ) ;
		}
		question showQuestion( int index )
		{
			return this->ques[index] ;
		}
	};
	int t ;
	cin>>t ;
	while( t-- )
	{
		int questionsAmount, optionsAmount, papersetsAmount ;
		cin>>questionsAmount>>optionsAmount>>papersetsAmount ;
		vector<paperset> paper(papersetsAmount) ;
		for( int i = 0; i<questionsAmount; i++ )
		{
			for( int j = 0; j<papersetsAmount; j++ )
			{
				int ans ;
				cin>>ans ;
				paper[j].addQuestion( ans ) ;
			}
		}

		for( int j = 0; j<questionsAmount; j++ )
		{
			int occurence[9] = { 0 }, max=0, answer ;
			for( unsigned int i = 0; i<paper.size(); i++ )
			{
				occurence[paper[i].showQuestion(j).getAnswer()-1]++ ;
			}
			for( int i = 0; i<9; i++ )
			{
				if( occurence[i]>max )
				{
					max = occurence[i] ;
					answer = i+1 ;
				}
			}
			cout<<answer<<" " ;
		}
		cout<<"\n" ;
	}

	return 0 ;
}