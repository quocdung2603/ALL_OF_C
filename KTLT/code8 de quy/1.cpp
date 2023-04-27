#include<bits/stdc++.h>
using namespace std;

// tinh so fibon thu n, n>2 voi f1 =1; f2 =2

int fibonacci(int n)
{
	if(n<=2)
		return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
	int n;
	cout<<"Nhap vao vi tri n cua fibonacci: ";
	cin>>n;
	cout<<fibonacci(n);
}
