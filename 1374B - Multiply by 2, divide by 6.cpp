#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;
int x[MAX];
int y[MAX];
int s;
ll n;

bool can = true;

int bazgasht(ll number, int co)
{
    if (number == 1)
        return co;

    if (number % 3 != 0)
    {
        can = false;
        return co;
    }

    if (number % 6 == 0)
        return bazgasht(number / 6, 1 + co);
    return bazgasht(number * 2, 1 + co);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll f;
        cin >> f;

        int res = bazgasht(f, 0);
        if (!can)
            cout << "-1\n";
        else
            cout << res << '\n';
        can = true;
    }
    return EXIT_SUCCESS;
}