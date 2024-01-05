#include <bits/stdc++.h>

using namespace std;

long long fpw(long long x, long long y, long long yeki)
{
    long long result = 1LL;
    if (y == 0)
        return 1LL;
    x %= yeki;

    if (x == 0)
        return 0;

    while (y > 0)
    {
        if (y & 1)
            result = (result * x) % yeki;

        y >>= 1;
        x = (x * x) % yeki;
    }

    return result;
}

struct BigInt {
    std::vector<int> digits;
};

/*



*/
const int MAXn = 1e3 + 7;
int arr[MAXn];
int n;

bool is_exist(int base, int end, int value)
{

    int mid = (base + end) / 2;
    if (arr[mid] == value)
        return true;
    if (base == end)
        return false;

    if (arr[mid] > value)
        end = mid;
    else
        base = mid + 1;
    return is_exist(base, end, value);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    /*


     */

    return EXIT_SUCCESS;
}