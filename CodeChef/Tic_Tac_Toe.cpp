#include<bits/stdc++.h>

using namespace std;

bool won(vector<string> &ttt, char p)
{
    bool won = false;
    for (int i = 0; i < 3; i++)
        if (ttt[i][0] == ttt[i][1] && ttt[i][1] == ttt[i][2])
            won |= (ttt[i][1] == p);
        else if (ttt[0][i] == ttt[1][i] && ttt[1][i] == ttt[2][i])
            won |= (ttt[1][i] == p);
    if ((ttt[0][0] == ttt[1][1] && ttt[1][1] == ttt[2][2]) || (ttt[0][2] == ttt[1][1] && ttt[1][1] == ttt[2][0]))
        won |= (ttt[1][1] == p);
    return won;
}

bool isReachable(vector<string> &ttt)
{
    bool xWon = won(ttt, 'X'), oWon = won(ttt, 'O');
    if (xWon && oWon)
        return false;

    int x = 0, o = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (ttt[i][j] == 'X')
                x++;
            else if (ttt[i][j] == 'O')
                o++;

    if (xWon)
        return x == o + 1;
    if (oWon)
        return x == o;
    return ((x == o) || (x == o + 1));
}

bool isFinished(vector<string> &ttt)
{
    if (won(ttt, 'X') || won(ttt, 'O'))
        return true;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (ttt[i][j] == '_')
                return false;
    return true;
}

void  solve()
{
    vector<string> ttt(3);
    for (int i = 0; i < 3; i++)
        cin >> ttt[i];

    if (isReachable(ttt))
        if (isFinished(ttt))
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    else
        cout << 3 << '\n';
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