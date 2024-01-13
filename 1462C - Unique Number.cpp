#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;
int x[MAX];
int y[MAX];
int s;
ll n;

void solve()
{
    int n;
    cin >> n;

    if (n > 45)
    {
        cout << "-1\n";
        return;
    }

    string res = "";

    for (int i = 9; i >= 1; i--)
    {
        if (n >= i)
        {
            n -= i;
            res += to_string(i);
        }
    }

    reverse(res.begin(), res.end());
    cout << res << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }

    return EXIT_SUCCESS;
}