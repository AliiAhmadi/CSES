#include <bits/stdc++.h>
 
using namespace std;
 
long long ss(int a)
{
    if (a < 1)
        return 0;
 
    long long res = 1;
 
    for (int i = 0; i < 8 * sizeof(int); i++)
    {
        long long cur = 1 << i;
 
        if (cur > a)
            break;
 
        res = cur;
    }
 
    return res;
}
 
void solve()
{
    long long a, b;
    cin >> a >> b;
 
    long long res = 0;
 
    res += max(a - 1, b - 1) * max(a - 1, b - 1);
 
    long long mx = max(a - 1, b - 1);
 
    if (mx % 2 == 0)
    {
        if (mx == a - 1)
        {
            res = mx * mx + b;
        }
        else
        {
            res = (mx + 1) * (mx + 1) - (a - 1);
        }
    }
    else
    {
        if (mx == a - 1)
        {
            res = (mx + 1) * (mx + 1) - (b - 1);
        }
        else
        {
            res = (mx * mx) + a;
        }
    }
 
    cout << res << '\n';
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    while (n--)
    {
        solve();
    }
    return 0;
}