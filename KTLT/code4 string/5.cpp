#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int i;
	for(i=0;i<s.length();i++)
	{
		if(s[i]>=48&&s[i]<=57)
			cout<<s[i];
		else
		{
			s.erase(i,1);
			i--;
		}
	}
}
