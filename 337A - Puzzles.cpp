#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 1e4;

int arr[MAX];

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++) cin >> arr[i];

    int mn = 10002;

    sort(arr, arr + m);

    for(int i = 0; i <= m - n; i++)
    {
        mn = min(mn, arr[i + n - 1] - arr[i]);
    }

    cout << mn << '\n';

    return EXIT_SUCCESS;
}