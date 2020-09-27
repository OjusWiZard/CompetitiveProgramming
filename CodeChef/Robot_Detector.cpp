#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int r, c;
	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		cout << "U";
		for (int i = 0; i < c; i++)
			cout << "R";
		for (int i = 0; i < c; i++)
			cout << "L";
	}
	cout << "U";
	for (int i = 0; i < c + 1; i++)
		cout << "R";
	for (int i = 0; i < r; i++)
		cout << "D";
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