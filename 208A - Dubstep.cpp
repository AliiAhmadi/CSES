#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

std::vector<std::string> res;
string trm(string s)
{
    int index = 0;
    for (int i = 0; i < s.length() - 2; i += 3)
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
            index += 3;
        else
            return s.substr(index);
    return s.substr(index);
}

int next(string s)
{
    for (int i = 0; i < (int)s.length() - 2; i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
            return i;
    }
    return -1;
}

void calc(std::string s)
{
    s = trm(s);
    // cout << s << '\n';
    // exit(0);
    int co = 0;
    while (s.length() != 0)
    {
        co++;
        s = trm(s);
        // if(co == 3) {cout << s << '\n'; exit(0);}
        if (s.length() == 0)
            return;
        int index = next(s);
        // if(co == 3){cout << index << '\n'; exit(0);}
        // exit(0);
        if (index == -1)
        {
            res.push_back(s);
            return;
        }
        else
        {
            res.push_back(s.substr(0, index));
            s = s.substr(index, s.length() - index);
            // if(co == 2){cout << s << '\n';exit(0);}
            // exit(0);
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    string s;
    cin >> s;

    calc(s);

    for (auto i : res)
        cout << i << ' ';
    cout << '\n';

    return EXIT_SUCCESS;
}