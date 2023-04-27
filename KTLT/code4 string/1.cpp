#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	getline(cin,a);
	int demNA=0,demso=0,demPA=0,demKT=0;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='a'||a[i]=='o'||a[i]=='e'||a[i]=='u'||a[i]=='i'||a[i]=='A'||a[i]=='O'||a[i]=='E'||a[i]=='U'||a[i]=='I')
		{
			demNA++;// chua hoa
		}
		else if(a[i]==' '||a[i]=='!'||a[i]=='"'||a[i]=='#'||a[i]=='$'||a[i]=='%'||a[i]=='&'||a[i]=='('||a[i]==')'||a[i]=='*'||a[i]=='+'||a[i]==','||a[i]=='.'||a[i]=='/'||a[i]==';'||a[i]==':'||a[i]=='<'||a[i]=='='||a[i]=='>'||a[i]=='?'||a[i]=='@'||a[i]=='['||a[i]==']'||a[i]=='^'||a[i]=='-'||a[i]=='`'||a[i]=='{'||a[i]=='|'||a[i]=='}'||a[i]=='~'||a[i]=='_')
		{
			demKT++;
		}
		else if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
			demso++;
		else
			demPA++;
//		for(int j=48;j<=57;j++)
//		{
//			if(a[i]==j)
//				demso++;
//		}
	}
	cout<<demNA<<" "<<demPA<<" "<<demso<<" "<<demKT;

}
//if(a[i]=='a'||a[i]=='o'||a[i]=='e'||a[i]=='u'||a[i]=='i'||a[i]=='A'||a[i]=='O'||a[i]=='E'||a[i]=='U'||a[i]=='I')
