#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    unordered_set<int> s;

    for (int i = 1; i < n; i++)
    {
        int temp;
        cin >> temp;

        s.insert(temp);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!s.count(i))
        {
            cout << i << '\n';
            return 0;
        }
    }

    return EXIT_SUCCESS;
}