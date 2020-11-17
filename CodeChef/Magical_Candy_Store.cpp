#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;

int decideM(int c, int turn, bool nextIsOne, int n, int r)
{
    if (c == 1)
        return 1;

    bool takeOdd = nextIsOne || (turn == n - 1);
    if (turn == n - 2 && nextIsOne)
        takeOdd = false;
    else if (turn == n - 1 && nextIsOne)
        takeOdd = false;

    if (r == 0 || r == nextIsOne)
        return c;
    else if (takeOdd)
        return ((c - 1) / 2) * 2 + 1;
    else
        return (c / 2) * 2;
}

void solve()
{
    int n, q;
    cin >> n;
    queue<int> a;
    for (int i = 0; i < n; i++)
    {
        int A;
        cin >> A;
        a.push(A);
    }

    cin >> q;
    while (q--)
    {
        long long r;
        cin >> r;
        long long chefCandies = 0, chefuCandies = 0;
        long long *player1 = &chefCandies, *player2 = &chefuCandies;

        long long turns = 0;
        while (r--)
        {
            turns++;
            int c = a.front();
            a.push(c);
            a.pop();

            int m = decideM(c, (turns - 1) % n, a.front() == 1, n, r);
            (*player1) = ((*player1) + m) % mod;

            if (m & 1)
                swap(player1, player2);
            if (turns % n == 0)
                swap(player1, player2);
        }
        cout << chefCandies << '\n';

        int queueReset = n - (turns - 1) % n - 1;
        while (queueReset--)
        {
            a.push(a.front());
            a.pop();
        }
    }
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