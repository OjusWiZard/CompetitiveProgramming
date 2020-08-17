#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;

uint64_t powMod2(uint64_t e)
{
	uint64_t res;

	if (e==0)
		res = 1;
	else if (e==1)
		res = 2;
	else
	{
		res = powMod2(e/2);
		res = res*res%mod;
		if (e%2)
			res = res*2%mod;
	}

	return res;
}

void  solve()
{
	int n;
	cin>>n;
	int a[n], ans[n];
	unordered_map<int, int> nums;
	queue<int> excess, missing;
	ans[n-1] = 1;
	for (int i = 0; i<n; i++)
	{
		cin>>a[i];
		nums[a[i]]++;
	}
	for (int i = 1; i<=n; i++)
	{
		if (nums[i]>1)
			while (nums[i]>1)
			{
				excess.push(i);
				nums[i]--;
			}
		else if (nums[i]<1)
			missing.push(i);
	}

	for (int i = n-2; i>=0; i--)
		ans[i] = ans[i+1]*2%mod;

	while ((!excess.empty())&&(!missing.empty()))
	{
		ans[missing.front()-1] = 0;
		ans[excess.front()-1] = (ans[excess.front()-1]+powMod2(n-missing.front()))%mod;
		ans[excess.front()-1] = (ans[excess.front()-1]+powMod2(n-excess.front()))%mod;
		excess.pop();
		missing.pop();
	}

	for (int i = 0; i<n; i++)
		cout<<ans[i]<<" ";
	cout<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while (t--)
		solve();
}