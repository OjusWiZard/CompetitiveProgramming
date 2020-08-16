#include<bits/stdc++.h>

using namespace std;

void clock(pair<bool, bool> &dir)
{
	if (dir.first)
		if (dir.second)
			dir.second = false;
		else
			dir.first = false;
	else
		if (dir.second)
			dir.first = true;
		else
			dir.second = true;
}

void antiClock(pair<bool, bool> &dir)
{
	if (dir.first)
		if (dir.second)
			dir.first = false;
		else
			dir.second = true;
	else
		if (dir.second)
			dir.second = false;
		else
			dir.first = true;
}

void  solve()
{
	char city[9][20];
	queue<pair<int, int>> traj;
	int safe = 0, infected = 0;
	for (int i = 8; i>=0; i--)
	{
		for (int j = 0; j<20; j++)
		{
			cin>>city[i][j];
			if (city[i][j]=='a'||city[i][j]=='c')
				safe++;
		}
	}

	pair<int, int> virus(1, 1);
	traj.push(make_pair(0, 0));
	pair<bool, bool> dir(true, true);
	int walled = 0;
	while (walled<2)
	{
		traj.push(make_pair(virus.first, virus.second));

		if (city[virus.second][virus.first]=='a')
		{
			safe--;
			infected++;
			antiClock(dir);
			city[virus.second][virus.first] = '-';
		}
		else if (city[virus.second][virus.first]=='c')
		{
			safe--;
			infected++;
			clock(dir);
			city[virus.second][virus.first] = '-';
		}
		else if (city[virus.second][virus.first]=='*')
		{
			walled++;
			if (virus.first==0||virus.first==19)
				dir.first = !dir.first;
			else if (virus.second==0||virus.second==8)
				dir.second = !dir.second;
		}

		virus.first = dir.first ? virus.first+1 : virus.first-1;
		virus.second = dir.second ? virus.second+1 : virus.second-1;
	}

	while (!traj.empty())
	{
		cout<<traj.front().first<<" "<<traj.front().second<<"\n";
		traj.pop();
	}
	for (int i = 8; i>=0; i--)
	{
		for (int j = 0; j<20; j++)
		{
			cout<<city[i][j];
		}
		cout<<"\n";
	}
	cout<<"safe="<<safe<<"\n";
	cout<<"infected="<<infected;
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