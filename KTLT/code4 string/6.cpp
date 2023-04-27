#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;					//Tan Tai		//iaT naT
	getline(cin,a);				//0123456		//6543210
	int dem=0;
	for(int i=a.length()-1;i>=0;i--)
	{	
		if(a[i]!=' '&&a[i-1]==' ')
		{
			cout<<a[i]<<i;
		}
	}
}
