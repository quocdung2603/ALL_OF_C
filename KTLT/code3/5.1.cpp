#include<iostream>
#include<string.h>
using namespace std;
int main()
{	
	int dem=1;
	string n;
	getline(cin,n);		
	for(int i=0;i<n.length();i++)												// nguyen tan  tai  ne
	{																			//       7   11   15
		
		if(n[i]!=' ')
		{	
			dem++;
			cout<<n[i];
		}
		if(n[i]==' ')
		{	
			cout<<endl;
			break;
		}
	}
	int dem1=1;
	for(int i=dem;i<n.length();i++)
	{	
			cout<<n[i];
			dem1++;
	}
	int dem2=dem+dem1;
	for(int i=dem2;i<n.length();i++)
	{		
		
		cout<<n[i];
	}

cout<<endl<<dem<<" "<<dem1<<" "<<dem2;
}
