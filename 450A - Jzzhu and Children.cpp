#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e5;
int x[MAX];
int y[MAX];
int s;
ll n;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> x[i];

    int index = 0;
    int val = 0;

    for (int i = 0; i < n; i++)
    {
        if (ceil(x[i] / (float)k) >= val)
        {
            index = i;
            val = ceil(x[i] / (float)k);
        }
    }

    cout << index + 1 << '\n';

    return EXIT_SUCCESS;
}