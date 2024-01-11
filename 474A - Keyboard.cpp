#include <bits/stdc++.h>

using namespace std;


typedef long long ll;

const ll MAX = 1e7;
int x[MAX];
int y[MAX];
int s;
ll n;

string s1 = "qwertyuiop";
string s2 = "asdfghjkl;";
string s3 = "zxcvbnm,./";

char find_left(char ch)
{
    size_t index = s1.find(ch);
    if (index != string::npos)
    {
        return s1[index + 1];
    }

    index = s2.find(ch);
    if (index != string::npos)
    {
        return s2[index + 1];
    }

    index = s3.find(ch);
    if (index != string::npos)
    {
        return s3[index + 1];
    }

    return '\0';
}

char find_right(char ch)
{
    size_t index = s1.find(ch);
    if (index != string::npos)
    {
        return s1[index - 1];
    }

    index = s2.find(ch);
    if (index != string::npos)
    {
        return s2[index - 1];
    }

    index = s3.find(ch);
    if (index != string::npos)
    {
        return s3[index - 1];
    }

    return '\0';
}

bool can = true;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    char ch;
    cin >> ch;

    string s;
    cin >> s;

    string res = "";

    if (ch == 'R')
    {
        for (auto c : s)
            res += find_right(c);
    }
    else
    {
        for (auto c : s)
            res += find_left(c);
    }

    cout << res << '\n';

    return EXIT_SUCCESS;
}