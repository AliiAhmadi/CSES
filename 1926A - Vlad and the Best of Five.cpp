// Dedicated to MHM

#include <bits/stdc++.h>

using namespace std;

void solve();

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }

    return EXIT_SUCCESS;
}

void solve()
{
    string s;
    cin >> s;

    int a = 0, b = 0;
    for (int i = 0; i < 5; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            b++;
    }

    cout << (a > b ? "A" : "B") << '\n';
}