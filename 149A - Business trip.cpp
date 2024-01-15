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

    int k;
    cin >> k;

    for(int i = 0; i < 12; i++)
    {
        cin >> x[i];
    }

    if(k == 0)
    {
        cout << 0 << '\n';
        return 0;
    }

    sort(x, x + 12);
    reverse(x, x + 12);

    int co = 0;

    int sum = 0;

    while(sum < k)
    {
        if(co > 11)
        {
            co = -1;
            break;
        }
        sum += x[co];
        co++;

    }

    cout << co << '\n';

    return EXIT_SUCCESS;
}