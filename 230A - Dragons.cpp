#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 1e5;

int x[MAX];
int y[MAX];
int s;

bool sr(const pair<int, int> &p1, const pair<int, int> &p2)
{
    return p1.first < p2.first;
}

bool ok(const pair<int, int> p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s <= p[i].first)
            return false;
        s += p[i].second;
    }

    return true;
}

map<string, int> mp;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> s >> n;

    pair<int, int> pa[n];

    for (int i = 0; i < n; i++)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;

        pa[i] = make_pair(tmp1, tmp2);
    }

    sort(pa, pa + n, sr);

    if (ok(pa, n))
        cout << "YES\n";
    else
        cout << "NO\n";

    return EXIT_SUCCESS;
}