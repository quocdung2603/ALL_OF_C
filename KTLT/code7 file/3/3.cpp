#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream input("Songuyen2.txt",ios_base::in);
	if(input.fail()==true)
	{
		cout<<"Mo file khong thanh cong:";
		return 0;
	}
	int a[100];
	int i=0, dem=0;
	while(input.eof()==false)
	{
		input>>a[i];
		i++;
		dem++;
	}
	for(int i=0;i<dem;i++) cout<<a[i]<<" ";
	input.close();
	return 0;
}
