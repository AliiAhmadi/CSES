#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    int co = 1;

    while(n != 1)
    {
        if(n % 2 == 0) 
        {
            n /= 2;
            continue;
        }

        co++;
        n /= 2;
    }

    cout << co << '\n';

    return EXIT_SUCCESS;
}