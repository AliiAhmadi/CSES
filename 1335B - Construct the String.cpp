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
    int n, a, b;
    cin >> n >> a >> b;

    string s1 = "";

    for(int i = 0; i < b; i++) s1 += 'a' + i;

    while(s1.length() < a) s1 += s1;
    s1 = s1.substr(0, a);

    while(s1.length() < n) s1 += s1;

    s1 = s1.substr(0, n);

    cout << s1 << '\n';
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