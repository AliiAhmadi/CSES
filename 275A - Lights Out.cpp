#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;
int x[MAX];
int y[MAX];
int s;
ll n;

int arr[5][5];
int res[3][3];

int counter(int i, int j)
{
    int c = 0;

    c += arr[i][j];

    c += arr[i - 1][j] + arr[i + 1][j] + arr[i][j - 1] + arr[i][j + 1];

    if (c % 2 == 0)
        return 1;
    return 0;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout << counter(i, j);
        }
        cout << '\n';
    }


    return EXIT_SUCCESS;
}