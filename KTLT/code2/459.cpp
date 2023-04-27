#include<bits/stdc++.h>
using namespace std;

void nhap(int n, int **q)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>*(*(q+i)+j);
	}
}
void xuat(int n, int **q)
{
	for(int i=0;i<n;i++)
	{	cout<<endl;
		for(int j=0;j<n;j++)
			cout<<*(*(q+i)+j)<<" ";
	}
}
int ma_phuong(int n, int **q)
{	int s1=0,s2=0;
	for(int i=0;i<n;i++) //duyet chinh va phu
	{
		s1 += *(*(q+i)+i);
		s2 += *(*(q+i)+n-i-1);
	}
	if(s1!=s2)
	{
		return 0;
	}
	int s3,s4;
	for(int i=0;i<n;i++)
	{	 s3=0,s4=0;
		for(int j=0;j<n;j++)
		{
			s3 += *(*(q+i)+j); //duyet dong
		}
		for(int j=0;j<n;j++)
		{
			s4 += *(*(q+j)+i);//duyet cot
		}
		if(s3!=s4)
		{
			return 0;
			break;
		}
	}
	if(s1==s3&&s1==s4)
		return 1;
}
int main()
{
	int n;
	cin>>n;
	int **q = new int* [100];
	for(int i=0;i<100;i++)
		*(q+i) = new int [100];
	nhap(n,q);
	xuat(n,q);
	cout<<endl;
	if(ma_phuong(n,q)==1)
		cout<<"day la ma tran ma phuong ";
	else
		cout<<"khong phai la ma tran ma phuong ";
}
