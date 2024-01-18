#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e5;
int x[MAX];
int y[MAX];
int s;
ll n;

void solve()
{
    int n;
    cin >> n;

    long long v = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        v += temp;
    }

    auto sq = sqrt(v);

    if((long long)sq * (long long)sq == v)
    {
        cout << "YES\n";
    }else cout << "NO\n";
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