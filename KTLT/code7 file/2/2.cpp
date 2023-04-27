#include<iostream>
#include<fstream>
using namespace std;	//	15
//5 3 1 4 7 3 2 1 65 11 5 98 2 12 10

int main()
{
	ifstream songuyen("Songuyen1.txt",ios_base::in);
	
	if(songuyen.fail()==true)
	{
		cout<<"Mo file khong thanh cong:";
		return 0;
	}
	
	int n;
	songuyen>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		songuyen>>a[i];
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;			
			}
		}
	}
	ofstream songuyen2("Songuyen1.txt",ios_base::out);
	for(int i=0;i<n;i++)
	{
		songuyen2<<a[i]<<" ";
	}
	songuyen.close();
	songuyen2.close();
	return 0;
}
