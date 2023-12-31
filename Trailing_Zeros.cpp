#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    long res = 0;
 
    for(int i = 5; n / i >= 1; i *= 5)
    {
        res += n / i;
    }
 
    cout << res << '\n';
 
    return 0;
}