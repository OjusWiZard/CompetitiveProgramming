#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long num)
{
    long long rt = sqrt(num);
    for (long long i = 2; i <= rt; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int nextPrime(int start)
{
    while (++start)
    {
        if (isPrime(start))
            return start;
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    int b[n], a[n] = {0}, prime = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] == i + 1)
        {
            prime = nextPrime(prime);
            a[i] = prime;
        }
    }
    for (int i = 0; i < n; i++)
        if (b[i] != i + 1)
            a[i] = a[b[i] - 1];

    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << '\n';
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