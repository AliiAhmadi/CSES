#include <bits/stdc++.h>

using namespace std;


typedef long long ll;

const ll MAX = 1e7;

int x[MAX];
int y[MAX];
int s;

bool is_t_prime(ll number)
{
    if(number == 1) return false;
    if(number == 2) return false;
    if(number == 3) return false;
    if(number == 4) return true;
    
    ll sqr = sqrt(number);

    if(sqr * sqr != number) return false;

    for(int i = 2; i <= sqrt(sqr); i++)
    {
        if(sqr % i == 0) return false;
    }

    return true;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        if(is_t_prime(t)) cout << "YES\n";
        else cout << "NO\n";
    }

    return EXIT_SUCCESS;
}