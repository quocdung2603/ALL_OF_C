#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[100][100];
void dequy(int i, int j)
{
	if (i>n || j>m || i<1 || j<1 || a[i][j]==0) return;
	a[i][j]=0;
	dequy(i, j+1);
	dequy(i, j-1);
	dequy(i+1, j);
	dequy(i-1, j);
	dequy(i+1, j+1);
	dequy(i+1, j-1);
	dequy(i-1, j+1);
	dequy(i-1, j-1);
}
void solve()
{
	int cnt=0;
	cin >> n >> m;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
			cin >> a[i][j];
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
		{
			if (a[i][j]==1)
			{
				dequy(i, j);
				cnt++;
			}
		}
	cout << cnt;
}
int main()
{
	int t=1;
//	cin >> t;
	while (t--)
		solve();
	return 0;
}