#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;
int x[MAX];
int y[MAX];
int s;
ll n;

bool comp(const pair<string, int> &p1, const pair<string, int> &p2)
{
    return p1.second < p2.second;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    map<string, int> mp;

    for(int i = 0; i < s.length() - 1; i++)
    {
        string ns = s.substr(i, 2);

        if(mp.find(ns) == mp.end())
        {
            mp[ns] = 1;
            continue;
        }

        mp[ns]++;
    }

    auto mx = max_element(mp.begin(), mp.end(), comp);
    cout << (*mx).first << '\n';

    return EXIT_SUCCESS;
}