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

    ll x;
    cin >> x;

    if(x >= 0)
    {
        cout << x << '\n';
        return 0;
    }
    x = abs(x);

    int r1 = x % 10;
    x /= 10;
    int r2 = x % 10;

    
    if(r1 >= r2)
    {
        cout << -x << '\n';
    } else {
        x /= 10;
        x *= 10;
        x += r1;
        cout << -x << '\n';
    }

    return EXIT_SUCCESS;
}