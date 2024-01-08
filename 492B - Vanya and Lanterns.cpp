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

    ll n, l;
    cin >> n >> l;

    for (int i = 0; i < n; i++)
        cin >> x[i];

    sort(x, x + n);

    for (int i = 0; i < n - 1; i++)
        y[i] = x[i + 1] - x[i];

    auto mx = max_element(y, y + n - 1);

    if (((*mx / 2.) > x[0]) && ((*mx / 2.) > (l - x[n - 1])))
    {
        cout << fixed << setprecision(9) << (*mx / 2.) << '\n';
    }
    else
    {
        cout << fixed << setprecision(9) << max((long long)x[0], l - x[n - 1]) << '\n';
    }

    return EXIT_SUCCESS;
}