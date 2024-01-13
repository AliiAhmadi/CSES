#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAX = 1e7;
int x[MAX];
int y[MAX];
int s;
ll n;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;

    while(n--)
    {
        string ss;
        cin >> ss;

        int zer = 0, on = 0;
        for(auto i : ss) 
            if(i == '1') on++;
            else zer++;

        if(min(zer, on) % 2 == 1) cout << "DA\n";
        else cout << "NET\n";
    }
    return EXIT_SUCCESS;
}