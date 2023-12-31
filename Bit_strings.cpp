#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    long long res = 1;
 
    for (int i = 0; i < n; i++)
    {
        res *= 2;
        res %= 1000000007;
    }
 
    cout << res << '\n';
 
    return 0;
}