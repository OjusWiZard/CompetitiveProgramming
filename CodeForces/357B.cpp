#include<bits/stdc++.h>

using namespace std;

void assignColor(vector<int> &dancer, vector<int> &triplet, int subject)
{
    for (int color = 1; color <= 3; color++)
    {
        bool alreadyAssigned = false;
        for (int i = 0; i < 3; i++)
            if (dancer[triplet[i] - 1] == color)
                alreadyAssigned = true;

        if (!alreadyAssigned)
            dancer[triplet[subject] - 1] = color;
    }
}

void  solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> dancer(n, 0);

    while (m--)
    {
        vector<int> triplet(3);
        for (int i = 0; i < 3; i++)
            cin >> triplet[i];
        for (int i = 0; i < 3; i++)
            if (!dancer[triplet[i] - 1])
                assignColor(dancer, triplet, i);
    }

    for (int i = 0; i < n; i++)
        cout << dancer[i] << ' ';
    cout << '\n';
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