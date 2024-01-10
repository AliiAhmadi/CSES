#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;

void solve()
{
    ll t;
    cin >> t;

    int num = t / 2020;
    bool ss = true;
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j <= num; j++)
        {
            if ((2020 * i) + (2021 * j) == t)
            {
                ss = false;
                cout << "YES\n";
                return;
            }
        }
    }

    if (ss)
        cout << "NO\n";
}

int x[MAX];
int y[MAX];
int s;
int n;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    cin >> n;

    while (n--)
    {
        solve();
    }
    return EXIT_SUCCESS;
}