#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(int n)
{
    while (n)
    {
        int baghi = n % 10;
        n /= 10;
        if (baghi != 4 && baghi != 7)
            return false;
    }

    return true;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    if (check(n))
    {
        cout << "YES\n";
        return 0;
    }

    int arr[] = {4, 7, 44, 47, 77, 74, 444, 447, 474, 744, 774, 747, 777, 444};

    for (auto i : arr)
        if (n % i == 0)
        {
            cout << "YES\n";
            return 0;
        }

    cout << "NO\n";

    return EXIT_SUCCESS;
}