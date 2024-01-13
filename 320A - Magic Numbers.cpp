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

    string x;
    cin >> x;

    // 1
    // 14
    // 144

    // ex 114114

    reverse(x.begin(), x.end());

    // 1
    // 41
    // 441

    // ex 411411

    int index = 0;

    if(x.length() == 1)
    {
        if(x == "1") cout << "YES\n";
        else cout << "NO\n";
        exit(0);
    }

    if(x.length() == 2)
    {
        if(x == "11" || x == "41") cout << "YES\n";
        else cout << "NO\n";
        exit(0);
    }

    bool flag = true;

    for(; index <= x.length() - 2;)
    {
        if(x[index] == '1')
        {
            index++;
            continue;
        }

        if(x.substr(index, 2) == "41")
        {
            index += 2;
            continue;
        }

        if(x.substr(index, 3) == "441")
        {
            index += 3;
            continue;
        }

        flag = false;
        break;
    }

    if(flag && (index < x.length()))
    {
        if(x.length() - index == 1 && x[index] != '1') 
        {
            flag = false;
        }
    }

    if(flag) cout << "YES\n";
    else cout << "NO\n";

    return EXIT_SUCCESS;
}