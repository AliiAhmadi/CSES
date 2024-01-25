#include <bits/stdc++.h>

using namespace std;


typedef long long ll;

const ll MAX = 1e5;
int x[MAX];
int y[MAX];
int s;
ll n;

void solve()
{
    vector<int> v1;
    vector<int> v2;

    for(int i = 0; i < 4; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;

        v1.push_back(t1);
        v2.push_back(t2);
    }

    unique(v1.begin(), v1.end());
    unique(v2.begin(), v2.end());

    cout << (abs(v1[0] - v1[1]) * abs(v2[0] - v2[1])) << '\n';

}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    while (n--)
        solve();

    return EXIT_SUCCESS;
}