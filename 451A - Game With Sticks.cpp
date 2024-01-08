#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;

int x[MAX];
int y[MAX];
int s;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m;
    cin >>n >> m;

    bool b = false;

    int points = n * m;

    while(n != 0 && m != 0)
    {
        points -= (n + m) - 1;

        b = !b;

        n--;
        m--;
    }

    if(!b) cout << "Malvika\n";
    else cout << "Akshat\n";

    return EXIT_SUCCESS;
}