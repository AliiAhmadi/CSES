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
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    int first = c - d;
    int last = c + d;

    int f = n * (a - b);
    int l = n * (a + b);

    if(first > l || f > last)
    {
        cout << "No\n";
        return;
    }

    cout << "Yes\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return EXIT_SUCCESS;
}