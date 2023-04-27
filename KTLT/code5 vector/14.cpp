#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void nhap(vector<vector<int> > &a, int &n)
{
	cin>>n;
	a.resize(n);
	for(int i=0;i<n;i++)
	{
		a[i].resize(n);
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
}

int tim_max(vector<vector<int> > a, int n)
{
	int max=a[0][0];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
	}
	return max;
}

void ktra_max(vector<vector<int> > a, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==tim_max(a,n))
			{
				cout<<"Vi tri: "<<"["<<i<<","<<j<<"]"<<endl;
			}
		}
	}
}

int ktra_cheo_chinh(vector<vector<int> > a, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				return 0;
			}
		}
	}
	return 1;
}

void ma_tran_chuyen_vi(vector<vector<int> > a, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	vector<vector<int> > a;
//	vector<vector<int> > b;
	nhap(a,n);
	ktra_max(a,n);
	if(ktra_cheo_chinh(a,n)==1)
		cout<<"Ma tran doi xung qua cheo chính!!";
	else 
		cout<<"Ma tran khong doi xung qua cheo chinh!!";
	cout<<endl<<endl<<"Ma tran chuyen vi:"<<endl;
	ma_tran_chuyen_vi(a,n);
}
