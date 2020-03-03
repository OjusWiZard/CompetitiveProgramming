#include <bits/stdc++.h>

using namespace std;

int main()
{
	int face[3], side[3] ;
	cin>>face[0]>>face[1]>>face[2] ;

	side[0] = sqrt( face[1]*face[2]/face[0] ) ;
	side[1] = sqrt( face[0]*face[2]/face[1] ) ;
	side[2] = sqrt( face[0]*face[1]/face[2] ) ;

	cout<<4*( side[0]+side[1]+side[2] ) ;
    return 0 ;
}