#include <bits/stdc++.h>
using namespace std;
int n, m, x, y;
int a[100][100];
bool check=false;
void dequy(int i, int j)
{
	if (i>n || j>m || i<1 || j<1 || a[i][j]==0) return;
	if (i==x && j==y) check=true;
	a[i][j]=0;
	dequy(i, j+1);
	dequy(i, j-1);
	dequy(i+1, j);
	dequy(i-1, j);
}
void solve()
{
	cin >> n >> m;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
			cin >> a[i][j];
	cin >> x >> y;
	x++; y++;
	dequy(1, 1);
	cout << check;
}
int main()
{
	int t=1;
//	cin >> t;
	while (t--)
		solve();
	return 0;
}