#include<bits/stdc++.h>

using namespace std;

int power(int final)
{
	return final/9 + (bool)(final%9>0);
}

void  solve()
{
	int pc, pr;
	cin>>pc>>pr;

	cout<< (power(pc)>=power(pr))<<" " <<min(power(pc), power(pr)) <<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
		solve();
}