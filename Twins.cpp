#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    ll sum = 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    int coin = 1;
    ll mySum = v[n - 1];

    for(int i = n - 2; i >= 0; i--)
    {
        if(mySum > (sum - mySum)) break;
        coin++;
        mySum += v[i];
    }

    cout << coin << '\n';

    return EXIT_SUCCESS;
}