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

    int n, m;
    cin >> n >> m;

    if(m > n){
        cout << "-1\n";
        return 0;
    }

    if(n == m) {
        cout << m << '\n';
        return 0;
    }

    int res = n / 2;
    res += (n % 2);

    while(res % m != 0)
    {
        res++;
    }

    cout << res << '\n';

    return EXIT_SUCCESS;
}