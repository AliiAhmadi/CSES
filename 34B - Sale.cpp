#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;

int x[MAX];
int y[MAX];
int s;
int n;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, t;
    cin >> n >> t;

    for(int i = 0; i < n; i++) cin >> x[i];

    sort(x, x + n);

    ll total = 0;

    for(int i = 0; i < t; i++)
    {
        if(x[i] < 0)
        {
            total += x[i];
        } else {
            break;
        }
    }

    cout << -total << '\n';

    return EXIT_SUCCESS;
}