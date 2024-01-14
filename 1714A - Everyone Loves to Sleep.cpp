#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;
int x[MAX];
int y[MAX];
int s;
ll n;

bool st(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if (p1.first != p2.first)
        return p1.first < p2.first;
    return p1.second < p2.second;
}

void solve()
{
    int n, h, m;
    cin >> n >> h >> m;

    vector<pair<int, int>> v;
    vector<pair<int, int>> v2;

    for (int i = 0; i < n; i++)
    {
        int ht, mt;
        cin >> ht >> mt;

        if ((ht < h) || (ht == h && mt < m))
        {
            v2.push_back(make_pair(ht, mt));
            continue;
        }

        v.push_back(make_pair(ht, mt));
    }

    if (v.size() > 0)
    {
        sort(v.begin(), v.end(), st);

        int hh, mm;

        if (v[0].second - m < 0)
        {
            cout << v[0].first - h - 1 << ' ' << v[0].second - m + 60 << '\n';
        }
        else
        {
            cout << v[0].first - h << ' ' << v[0].second - m << '\n';
        }
    }
    else
    {
        sort(v2.begin(), v2.end(), st);
        reverse(v2.begin(), v2.end());

        // if (v2[v2.size() - 1].second - m < 0)
        // {
        //     cout << v2[v2.size() - 1].first - h - 1 << ' ' << v[0].second - m + 60 << '\n';
        // }
        // else
        // {
        //     cout << v[0].first - h << ' ' << v[0].second - m << '\n';
        // }

        if (60 - m + v2[v2.size() - 1].second > 59)
        {
            cout << 23 - h + v2[v2.size() - 1].first + 1 << ' ' << -m + v2[v2.size() - 1].second << '\n';
            return;
        }

        cout << 23 - h + v2[v2.size() - 1].first << ' ' << 60 - m + v2[v2.size() - 1].second << '\n';
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    cin >> t;

    while (t--)
        solve();

    return EXIT_SUCCESS;
}