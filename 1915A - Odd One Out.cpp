#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;
int x[MAX];
int y[MAX];
int s;
ll n;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    cin >> s;

    while(s--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a == b) cout << c << '\n';
        else if(b == c) cout << a << '\n';
        else if(a == c) cout << b << '\n';
    }

    return EXIT_SUCCESS;
}