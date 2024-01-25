#include <bits/stdc++.h>

using namespace std;


typedef long long ll;

const ll MAX = 1e5;
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

    for(int i = 0; i < n; i++)
    {
        ll a, b;
        cin >>a >> b;

        if((a + b) % 2 == 0) cout << "Bob" << '\n';
        else cout << "Alice" << '\n';
    }

    return EXIT_SUCCESS;
}