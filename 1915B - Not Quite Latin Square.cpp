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
    string s1, s2, s3;

    cin >> s1 >> s2 >> s3;

    map<char, bool> mp;

    if (s1.find('?') != string::npos)
    {
        for (auto i : s1)
        {
            if (i != '?')
                mp[i] = true;
        }

        if (mp.find('A') == mp.end())
            cout << "A";
        else if (mp.find('B') == mp.end())
            cout << "B";
        else if (mp.find('C') == mp.end())
            cout << "C";
        return;
    }

    if (s2.find('?') != string::npos)
    {
        for (auto i : s2)
        {
            if (i != '?')
                mp[i] = true;
        }

        if (mp.find('A') == mp.end())
            cout << "A";
         else if (mp.find('B') == mp.end())
            cout << "B";
        else if (mp.find('C') == mp.end())
            cout << "C";
        return;
    }

    if (s3.find('?') != string::npos)
    {
        for (auto i : s3)
        {
            if (i != '?')
                mp[i] = true;
        }

        if (mp.find('A') == mp.end())
            cout << "A";
        else if (mp.find('B') == mp.end())
            cout << "B";
        else if (mp.find('C') == mp.end())
            cout << "C";
        return;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        solve();
        cout << '\n';
    }

    return EXIT_SUCCESS;
}