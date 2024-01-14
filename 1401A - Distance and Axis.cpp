#include <bits/stdc++.h>

using namespace std;


void solve()
{
    int n, k;
    cin >> n >> k;

    if (k >= n)
    {
        cout << k - n << '\n';
        return;
    }

    if ((n + k) % 2 == 1)
        cout << "1\n";
    else
        cout << 0 << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int test;
    cin >> test;

    while (test--)
    {
        solve();
    }

    return EXIT_SUCCESS;
}