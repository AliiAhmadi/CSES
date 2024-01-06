#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    cout << max(max(max(a * b * c, a * (b + c)), (a * b) + c), max(a + (b * c), max(a + b + c, (a + b) * c))) << '\n';

    return EXIT_SUCCESS;
}