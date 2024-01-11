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
    cin >> n;

    int k = 2;

    while (true)
    {
        ll z = pow(2, k) - 1LL;
        if (n % z == 0)
        {
            cout << (n / z) << '\n';
            // cout << k << '\n';
            return;
        }
        k++;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    cin >> t;

    while (t--)
        solve();

    return EXIT_SUCCESS;
}