#include<bits/stdc++.h>
using namespace std;

void reverse(string &a, int i, int j)
{
	if(i<j)
	{
		swap(a[i],a[j]);
		reverse(a,i+1,j-1);
	}
}
int main()
{
	string a;
	getline(cin,a);
	string b=a;
	int j=a.size()-1;
	reverse(a,0,j);
	if(a.compare(b)==0)
	{
		cout<<"1";
	}
	else cout<<"0";
	return 0;
}
