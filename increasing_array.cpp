#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    long long total = 0;
 
    int first;
    cin >> first;
 
    for(int i = 1; i < n; i++)
    {
        int temp;
        cin >> temp;
 
        if(temp >= first)
        {
            first = temp;
            continue;
        }
 
        total += first - temp;
    }
 
    cout << total << '\n';
 
    return 0;
}
