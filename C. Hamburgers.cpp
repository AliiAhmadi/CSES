#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll valval(ll value)
{
    if (value >= 0LL)
        return value;
    return 0LL;
}

ll b = 0, ss = 0, c = 0;

string s;
ll pb, pc, ps;
ll nb, ns, nc;
ll price;

bool is_valid(ll value)
{
    ll has = (max((value * b) - nb, 0LL) * pb) + (max((value * c) - nc, 0LL) * pc) + (max((value * ss) - ns, 0LL) * ps);
    if (has <= price)
        return true;
    return false;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'C')
            c++;
        if (s[i] == 'B')
            b++;
        if (s[i] == 'S')
            ss++;
    }

    cin >> nb >> ns >> nc;

    cin >> pb >> ps >> pc;

    cin >> price;

    ll dw = 0, up = 1e13;
    // ll dw = 0, up = (price / (pb * b + ps * ss + pc * c));

    while (up - dw > 1LL)
    {
        ll mid = (dw + up) / 2;
        if (is_valid(mid))
            dw = mid;
        else
            up = mid;
    }

    cout << dw << '\n';

    return EXIT_SUCCESS;
}