#include <bits/stdc++.h>

using namespace std;

long long nb, ns, nc, pb, ps, pc, rb = 0, rs = 0, rc = 0;

long long cost(long long hams)
{
	return pb * max(hams * rb - nb, 0ll) + ps * max(hams * rs - ns, 0ll) + pc * max(hams * rc - nc, 0ll);
}

void solve()
{
	string rec;
	cin >> rec;
	rb = 0, rs = 0, rc = 0;
	long long R;
	cin >> nb >> ns >> nc >> pb >> ps >> pc >> R;

	for (int i = 0; i < rec.length(); i++)
	{
		rb += (rec[i] == 'B');
		rc += (rec[i] == 'C');
		rs += (rec[i] == 'S');
	}

	long long l = 0, r = (long long)1e13, ans;
	while (l <= r)
	{
		long long mid = (l + r) / 2;
		if (cost(mid) <= R)
		{
			l = mid + 1;
			ans = mid;
		}
		else
			r = mid - 1;
	}
	cout << ans << "\n";
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