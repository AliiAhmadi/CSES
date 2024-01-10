#include <bits/stdc++.h>

using namespace std;


typedef long long ll;

const ll MAX = 1e7;

int x[MAX];
int y[MAX];
int s;
int n;

bool Odd_Divisor(ll num)
{
    if(num % 2 == 1) return true;


    ll base = 1;

    while(num >= base)
    {
        base *= 2;
        if(num == base) return false;
    }

    return true;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    cin >> n;

    while(n--)
    {
        ll t;
        cin >> t;

        if(Odd_Divisor(t)) cout << "YES\n";
        else cout << "NO\n";
    }

    return EXIT_SUCCESS;
}