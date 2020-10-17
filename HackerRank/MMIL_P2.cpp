#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> arr1(n), arr2(n);
	for (int i = 0; i < n; i++)
		cin >> arr1[i];
	for (int i = 0; i < n; i++)
		cin >> arr2[i];
	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end(), greater<>());

	for (int i = 0; i < k; i++)
		if (arr1[i] < arr2[i])
			swap(arr1[i], arr2[i]);

	long long sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr1[i];

	cout << sum << '\n';
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