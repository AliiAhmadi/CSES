#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (auto i : arr)
        cout << i << ' ';

    cout << '\n';

    return EXIT_SUCCESS;
}