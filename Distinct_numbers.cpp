#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
 
 
        s.insert(temp);
    }
 
    cout << s.size() << '\n';
 
    return 0;
}