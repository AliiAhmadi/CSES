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

    int a = 0, b = 0, c = 0, d = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (temp == 1)
            a++;
        if (temp == 2)
            b++;
        if (temp == 3)
            c++;
        if (temp == 4)
            d++;
    }

    // cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    // exit(0);
    // 1 1 2 1

    int result = d;
    // 1
    result += b / 2;

    // 1
    b %= 2;
    result += min(a, c);

    int mn = min(a, c);

    // 2
    a -= mn;
    // a = 0
    c -= mn;
    // c = 1

    // 0 1 1 1

    // cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    // exit(0);

    if (b == 0)
    {
        if (a != 0)
            result += ceil(a / 4.);
        else
            result += c;
    }
    else
    {
        if (a != 0 && c == 0)
        {
            if (a <= 2)
            {
                result += 1;
            }
            else
            {
                result += 1;
                a -= 2;
                result += ceil(a / 4.);
            }
        }
        else
        {
            result += 1 + c;
        }
    }

    cout << result << '\n';

    return EXIT_SUCCESS;
}