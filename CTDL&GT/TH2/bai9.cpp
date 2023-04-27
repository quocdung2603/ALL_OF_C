#include <bits/stdc++.h>
using namespace std;
void sapxep(vector<int> &a,int n)
{
	sort(a.begin()+2,a.end());
	for(int i=2;i<n;i++)
	{
		if(a[i]>a[1])
		{
			swap(a[1],a[i]);
			break;
		}
	}
//	for(int i=2;i<n;i++)
//	a[i]=b[i];
}
int main()
{
	int n; cin>>n;
	vector<int> a;
	while(n>0)
	{
		a.push_back(n%10);
		n/=10;
	}
	reverse(a.begin(),a.end());
	int H=a.size();
	if(a[H-1]>a[H-2])
	{
		swap(a[H-1],a[H-2]);
		for(int i=0;i<H;i++)
		cout<<a[i];
	}
	else
	{
		sapxep(a,H);
		for(int i=0;i<H;i++)
		cout<<a[i];
	}
	return 0;
}