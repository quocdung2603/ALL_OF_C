#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	getline(cin,a);
	for(int i=0;i<a.length();i++)		//mang toan chu thuong
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[i] += 32;
		}
	}
	for(int i=0;i<(int)a.length();i++)
	{
		while(a[i]==' '&&a[i+1]==' ')
			a.erase(i,1);
		while(a[0]==' ')
			a.erase(0,1);
		if(a[i+1]=='\0'&&a[i]==' ')
		{
			while(a[i]==' ')
			{
				a.erase(i,1);
			}
		}
	}
	for(int i=0;i<a.length();i++)		//Hoa chu dau
	{
		if(a[0]>=97&&a[0]<=122)
		{
			a[0]=a[0]-32;
		}
		if(a[i]==' '&&a[i+1]>=97&&a[i+1]<=122) //hoa chu giua
		{
			a[i+1] -=32;
		}
	}
	cout<<a;
}
