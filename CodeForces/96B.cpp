#include<bits/stdc++.h>

using namespace std;

long long int lucky(int a)
{
    string binary;
    while (a)
    {
        binary.insert(binary.begin(), (a % 2) + '0');
        a /= 2;
    }

    long long int ans = 0;
    for (int i = 1; i < binary.length(); i++, ans *= 10)
        ans += (binary[i] == '0' ? 4 : 7);
    return ans / 10;
}

bool equal47(long long int n)
{
    int fours = 0, sevens = 0;
    while (n)
    {
        if (n % 10 == 4)
            fours++;
        else if (n % 10 == 7)
            sevens++;
        n /= 10;
    }
    return fours == sevens;
}

void  solve()
{
    int n;
    cin >> n;

    long long int i = 2, luckyNum = lucky(i);
    while (luckyNum < n || !equal47(luckyNum))
        luckyNum = lucky(++i);

    cout << luckyNum << '\n';
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