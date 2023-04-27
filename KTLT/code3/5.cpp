#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	getline(cin,a);
	int dem=0;
	for(int i=0;i<a.length();i++)
	{	
		if(a[i]!=' ')
		{
			dem++;
			cout<<a[i];
		}
		if(a[i]==' ')
		{
			dem++;
			break;
		}
	}
	cout<<endl;
	int dem1=0;
	for(int i=dem;i<a.length();i++)
	{	
		dem1++;
		if(a[i]==' ')
		{
			dem1--;
		}
	}
	int dem2;
	dem2=dem+dem1;
	for(int i=dem;i<dem2-1;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	for(int i=dem2-1;i<a.length();i++)
	{
		cout<<a[i];
	}
	
	cout<<endl<<dem<<" "<<dem1<<" "<<dem2;
}
