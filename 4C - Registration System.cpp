#include <bits/stdc++.h>

using namespace std;


typedef long long ll;

const int MAX = 1e4;

int arr[MAX];

map<string, int> mp;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;
        string s;

    for(int i = 0; i < n; i++)
    {
        cin >> s;

        if(mp[s] == 0) {
            cout << "OK\n";
            mp[s] = 1;
        } else {
            cout << s << mp[s]++ << '\n';
        }
    }

    return EXIT_SUCCESS;
}