#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    string s;
    cin >> s;
 
    int mx = 1;
    int now = 1;
    int before = s[0];
 
    for (size_t i = 1; i < s.length(); i++)
    {
        if (before == s[i])
        {
            now++;
            continue;
        }
 
        mx = max(mx, now);
        before = s[i];
        now = 1;
    }
 
    mx = max(mx, now);
 
    cout << mx << '\n';
 
    return 0;
}