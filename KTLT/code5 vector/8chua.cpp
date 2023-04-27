#include<iostream>
#include<vector>

using namespace std;

void nhap(vector<int> &a)
{
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
}

int tim_max(vector<int> b)
{
	int max=0;
	for(int i=0;i<b.size();i++)
	{
		if(b[i]>max)
		{
			max = b[i];
		}
	}
	return max;
}

void day_con(vector<int> a, vector<int> b)
{
	int dem=0;
	for(int i=0;i<a.size();i++)		//mang b cho thanh 1
	{
		b.push_back(1);
	}
	
	for(int i=a.size()-1;i>=0;i--)
	{
		if(a[i]>=a[i-1])
		{
			b[i-1]=b[i]+1;
		}
//		cout<<b[i]<<" ";
	}
	int soluong = tim_max(b);
	for(int i=0;i<a.size();i++)
	{
		if(b[i]==soluong)
		{
				for(int j=i;j<soluong+i;j++)
			{
				cout<<a[j]<<" ";
			}
		}
	}
}

void xuat(vector<int> a)
{
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
}



int main()
{
	vector<int> a;
	vector<int> b;
	nhap(a);
	xuat(a);
	cout<<"\n";

	cout<<"\n";
	day_con(a,b);
//	xuatb(b);
}
