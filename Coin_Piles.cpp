#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int a, b;
    cin >> a >> b;
 
    // 4 5
    // 3 3
    // 1 2
    // 0 0
 
    // 10 20
    // 9 
 
    // 4 4
    // 2 3
    // 1 1
    // NO
 
    // 
 
 
    if(a > 2 * b || b > 2 * a)
    {
        cout << "NO\n";
        return;
    }
 
    if((a + b) % 3 == 0) cout << "YES\n";
    else cout << "NO\n";
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    while(n--)
    {
        solve();
    }
 
    return 0;
}