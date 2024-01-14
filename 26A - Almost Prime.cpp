#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;
int x[MAX];
int y[MAX];
int s;
ll n;

std::vector<int> PrimeFactors(long long int number)
{
    std::vector<int> primes;

    while (number % 2 == 0)
    {
        primes.push_back(2);
        number /= 2;
    }

    for (int i = 3; i <= sqrt(number); i += 2)
    {
        while (number % i == 0)
        {
            primes.push_back(i);
            number /= i;
        }
    }

    if (number > 2)
        primes.push_back(number);

    return primes;
}


int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    int co = 0;

    for (int i = 1; i <= n; i++)
    {
        auto p = PrimeFactors(i);

        set<int> st(p.begin(), p.end());

        if(st.size() == 2)
        {
            co++;
        }
    }


    cout << co << '\n';

    return EXIT_SUCCESS;
}