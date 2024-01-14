#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e5;
int x[MAX];
int y[MAX];

int s;
ll n;

int valval(int n)
{
    if (n > 0)
        return n;
    return 0;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int f, t;
        cin >> f >> t;
        x[i] = f - valval(t - k);
    }

    cout << *max_element(x, x + n) << '\n';

    return EXIT_SUCCESS;
}