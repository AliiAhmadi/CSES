#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;

int x[MAX];
int y[MAX];
int s;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
        cin >> x[i];

    ll count = 0;
    int before = x[0];

    for (int i = 1; i < m; i++)
    {
        if (before > x[i])
        {
            count++;
            before = x[i];
            continue;
        }

        before = x[i];
    }

    // if() count++;

    // cout << count << '\n';

    // if(x[m - 1] == 1) cout << (count * n) << '\n';
    cout << (count * n) + (x[m - 1] - 1) << '\n';

    return EXIT_SUCCESS;
}