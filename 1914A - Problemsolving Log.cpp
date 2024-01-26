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

    string s;
    cin >> s;

    int res = 0;

    set<char> ss;

    for(int i = 0; i < 26; i++)
    {
        res += (count(s.begin(), s.end(), 'A' + i) >= i + 1);
    }

    cout << res << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    while(n--) solve();

    return EXIT_SUCCESS;
}