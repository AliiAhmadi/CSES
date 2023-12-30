#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }
 
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
            cout << i + 1 << ' ';
    }
 
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            cout << i + 1 << ' ';
    }
 
    cout << '\n';
 
    return 0;
}