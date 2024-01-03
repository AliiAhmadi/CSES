#include <bits/stdc++.h>

using namespace std;

bool seen[1001][1001];
string strs[1001];

bool check(int i, int j, int n, int m)
{
	if (i < 0 || j < 0)
		return false;
	if (i >= n || j >= m)
		return false;
	return true;
}

// DFS

void dfs(int i, int j, int n, int m)
{
	if (!check(i, j, n, m))
		return;
	if (strs[i][j] == '#' || seen[i][j])
		return;

	seen[i][j] = true;
	dfs(i - 1, j, n, m);
	dfs(i + 1, j, n, m);
	dfs(i, j - 1, n, m);
	dfs(i, j + 1, n, m);
	return;
}

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> strs[i];

	int count = 0;

	// cout << "Hello" << '\n';
	// return 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if ((strs[i][j] == '.') && !seen[i][j])
			{
				count++;
				dfs(i, j, n, m);
			}

	cout << count << '\n';

	return 0;
}
