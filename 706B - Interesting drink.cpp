#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;

int x[MAX];
int y[MAX];
int s;
int n;

void solve()
{
    int q;
    cin >> q;

    if(q < x[0])
    {
        cout << 0 << '\n';
        return;
    }

    int base = 0, end = n;
    while(end - base > 1)
    {
        int mid = (base + end) / 2;
        if(x[mid] > q) end = mid;
        else base = mid;
    }
    // 3 6 8 10 11
    // base end
    // 0     5
    // 2     5
    // 3     5
    // 3     4
    cout << base + 1 << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    cin >> n;

    for(int i = 0 ; i< n; i++) cin >> x[i];

    sort(x, x + n);

    int q;
    cin >> q;

    for(int i = 0; i < q; i++) solve();

    return EXIT_SUCCESS;
}