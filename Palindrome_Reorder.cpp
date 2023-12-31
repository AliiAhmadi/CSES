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
 
    if (a > 2 * b || b > 2 * a)
    {
        cout << "NO\n";
        return;
    }
 
    if ((a + b) % 3 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
 
string rep(char ch, int x)
{
    string s = "";
 
    for (int i = 0; i < x; i++)
        s += ch;
 
    return s;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    string x;
    cin >> x;
 
    map<char, int> mp;
 
    for (int i = 0; i < 26; i++)
    {
        mp['A' + i] = 0;
    }
 
    for (auto ch : x)
        mp[ch]++;
 
    int co = 0;
    int r = 0;
    char ch = '1';
    for (auto i : mp)
    {
        if (i.second % 2 != 0)
        {
            co++;
            ch = i.first;
            r = i.second;
        }
 
        if (co > 1)
        {
            cout << "NO SOLUTION" << '\n';
            return 0;
        }
    }
 
    string res = "";
 
    for (auto i : mp)
    {
        if (i.second % 2 == 1)
            continue;
 
        res += rep(i.first, i.second / 2);
    }
 
        cout << res;
 
        if(ch != '1') {
            for(int i = 0; i < r; i++)
            {
                cout << ch;
            }
        }
 
        reverse(res.begin(), res.end());
        cout << res << '\n';
 
    return 0;
}