#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;

int x[MAX];
int y[MAX];
int s;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> x[i];

    int b = 0;
    int p = 0;
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        if (x[i] == 25)
        {
            b++;
        }
        else if (x[i] == 50)
        {
            if (b == 0)
            {
                cout << "NO\n";
                return 0;
            }
            else
            {
                p++;
                b--;
            }
        }
        else
        {
            if (b == 0)
            {
                cout << "NO\n";
                return 0;
            }
            else if (p == 0 && b < 3)
            {
                cout << "NO\n";
                return 0;
            }
            else
            {
                if (p == 0)
                {
                    s++;
                    b -= 3;
                }
                else
                {
                    s++;
                    b--;
                    p--;
                }
            }
        }
    }

    cout << "YES\n";

    return EXIT_SUCCESS;
}