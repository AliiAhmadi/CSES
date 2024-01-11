#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m;
    cin >> n>> m;

    int co = 0;
    int total = 0;

    while(n != 0)
    {
        n--;
        co++;
        if(co == m)
        {
            n++;
            co = 0;
        }
        total++;
    }

    cout << total << '\n';

    return EXIT_SUCCESS;
}