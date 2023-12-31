#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    for(int i = 0; i < (1 << n); i++)
    {
        int v = (i ^ (i >> 1));
 
        bitset<32> bt(v);
 
        cout << bt.to_string().substr(32 - n) << '\n';
    }
 
    return 0;
}