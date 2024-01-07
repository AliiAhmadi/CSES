#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] > 'Z' || s[i] < 'A')
            return false;
    }

    return true;
}

string ok(string s)
{
    string res = "";

    for(int i = 0; i < s.length(); i++)
    {
        if(islower(s[i])) res += toupper(s[i]);
        else res += tolower(s[i]);
    }

    return res;
}

int main()
{
    string s;
    cin >> s;

    if(!check(s)) cout << s << '\n';
    else cout << ok(s) << '\n';
    return 0;
}