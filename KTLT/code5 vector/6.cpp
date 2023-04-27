#include<bits/stdc++.h>
using namespace std;

void gt_n(vector<int> a)


int main()
{
	int n;
	int k;
	n=k;
	int sn=1, sk=1, snk=0, s;
	cin>>n;
	s = (sn/(sk*snk));
	for(int i=0;i<=k;i++)
	{
		sn = sn * n;
		sk = sk + k;
		snk = snk * (n-k);
		s += s;
		cout<<s<<" "<<endl;
	}
	

}
