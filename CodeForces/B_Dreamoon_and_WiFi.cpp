#include<bits/stdc++.h>

using namespace std;

void  solve()
{
	string wifi, phone;
	cin>>wifi>>phone;

	int dev = 0, ques = 0, form = 0, act = 0;
	for (int i = 0; i<wifi.length(); i++)
	{
		if (wifi[i]=='+')
			form++;
		else
			form--;
		if (phone[i]=='?')
			ques++;
		else if (phone[i]=='+')
			act++;
		else
			act--;
	}
	dev = abs(act-form);

	if (dev>ques)
		cout<<fixed<<setprecision(12)<<(double)0;
	else
	{
		int c = 1;
		for (int i = 0;i<(ques+dev)/2;i++)
			c *= ques-i;
		for (int i = 2;i<=(ques+dev)/2;i++)
			c /= i;
		cout<<fixed<<setprecision(12)<<(double)c/(1<<ques);
	}
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