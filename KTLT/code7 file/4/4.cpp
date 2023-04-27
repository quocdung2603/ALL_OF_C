#include<bits/stdc++.h>
using namespace std;

int main()
{
	ifstream songuyen1("Songuyen1.txt",ios::in);
	ifstream songuyen2("Songuyen2.txt",ios::in);
	
	int a[20];
	int i=0;
	while(songuyen1.eof()==false)
	{
		songuyen1>>a[i]; i++;
	}
	int b[20];
	int j=0;
	while(songuyen2.eof()==false)
	{
		songuyen2>>b[j]; j++;
	}
	
	// tron 2 mang
	int dema=0, demb=0;
	int c[40], demc=0;
	while((dema<i)&&(demb<j))
	{
		if(a[dema]<b[demb])
		{
			c[demc] = a[dema];
			demc++;
			dema++;
		}
		else if (a[dema]>=b[demb])
		{
			c[demc] = b[demb];
			demc++;
			demb++;
		}
	}
	
	
	
	ofstream songuyen3("Songuyen3.txt", ios::out);
	for(int i=0;i<demc;i++)
	{
		songuyen3<<c[i]<<" ";
	}
	
	songuyen1.close();
	songuyen2.close();
	songuyen3.close();
}
