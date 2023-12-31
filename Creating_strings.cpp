#include <bits/stdc++.h>
 
using namespace std;
 
void tower(int n, int from, int to, int aux)
{
    if (n == 0)
        return;
 
    tower(n - 1, from, aux, to);
    cout << from << ' ' << to << '\n';
    tower(n - 1, aux, to, from);
}
 
long fac(int n)
{
    long res = 1;
 
    for (int i = n; i >= 1; i--)
        res *= i;
 
    return res;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    string s;
    cin >> s;
 
    sort(s.begin(), s.end());
 
    set<string> st;
    long res = fac(s.length());
 
    for (int i = 0; i < res; i++)
    {
        if (!st.count(s))
        {
            st.insert(s);
        }
 
        next_permutation(s.begin(), s.end());
    }
 
    cout << st.size() << '\n';
    for (auto i : st)
        cout << i << '\n';
 
    return 0;
}
