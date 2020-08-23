#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	int a, b, c;
	cin>>a>>b>>c;

	if (min({ a+b-c, a-b+c, -a+b+c })<0||(a+b+c)%2)
		cout<<"Impossible";
	else
		cout<<(a+b-c)/2<<" "<<(-a+b+c)/2<<" "<<(a-b+c)/2;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	t = 1;
	while (t--)
		solve();
}