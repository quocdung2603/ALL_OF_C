#include<iostream>
#include<string.h>
using namespace std;

int main()
{	
	int vitri;
	cout<<"vi tri bat dau lay : ";
	cin>>vitri;
	string n;
	cin>>n;
	
	for(int i=vitri;i<n.length();i++)
	{
		cout<<n[i];
	}
}
