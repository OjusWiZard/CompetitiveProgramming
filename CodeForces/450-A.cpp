#include <bits/stdc++.h>

using namespace std;

int main()
{
	int numberOfStudents, candies, need, index ;
	vector<int>	needOfStudent, studentNumber ;
	cin>>numberOfStudents>>candies ;
	for( int i = 0; i<numberOfStudents; i++ )
	{
		cin>>need ;
		needOfStudent.push_back( need ) ;
		studentNumber.push_back( i+1 ) ;
	}

	while( needOfStudent.size()>1 )
	{
		if( *needOfStudent.begin() <= candies )
		{
			needOfStudent.erase( needOfStudent.begin() ) ;
			studentNumber.erase( studentNumber.begin() ) ;
		}
		else
		{
			need = *needOfStudent.begin() ;
			index = *studentNumber.begin() ;
			needOfStudent.erase( needOfStudent.begin() ) ;
			studentNumber.erase( studentNumber.begin() ) ;
			need -= candies ;
			needOfStudent.push_back( need ) ;
			studentNumber.push_back( index ) ;
		}
	}

	cout<<*studentNumber.begin() ;

    return 0 ;
}