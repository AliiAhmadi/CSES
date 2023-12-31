#include <bits/stdc++.h>
 
using namespace std;
 
long long fn(vector<long long> &v, long long cursum, long long total, int i)
{
    if (i == 0)
        return abs(total - cursum - cursum);
 
    return min(fn(v, cursum + v[i], total, i - 1), fn(v, cursum, total, i - 1));
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
 
    vector<long long> v(n);
 
    for (int i = 0; i < n; i++)
        cin >> v[i];
 
    cout << fn(v, 0, accumulate(v.begin(), v.end(), 0LL), n - 1) << '\n';
 
    return 0;
}
