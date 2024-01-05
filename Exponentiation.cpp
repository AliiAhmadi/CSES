// Ali AHmadi 2024

#include <bits/stdc++.h>

using namespace std;

long long fpw(long long x, long long y, long long yeki)
{
        long long result = 1LL;
        if(y == 0) return 1LL;
        x %= yeki;

        if(x == 0) return 0;

        while(y > 0)
        {
                if(y & 1)
                        result = (result * x) % yeki;

                y >>= 1;
                x = (x * x) % yeki;
        }

        return result;
}

int main()
{
        int n;
        cin >> n;

        while(n--)
        {
                int a, b;
                cin >> a >> b;

                cout << fpw(a, b, 1e9+7) <<'\n';
        }
        return EXIT_SUCCESS;
}
