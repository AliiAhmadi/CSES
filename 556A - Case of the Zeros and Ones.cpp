#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;
int x[MAX];
int y[MAX];
int s;
ll n;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int zero = 0, one = 0;
    for(auto ch : s) if(ch == '1') one++; else zero++;
    cout << abs(one - zero) << '\n';

    return EXIT_SUCCESS;
}