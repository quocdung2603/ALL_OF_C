#include <bits/stdc++.h>
using namespace std;
class datasv
{
	public:
		string ten;
		int tuoi;
};
class Node
{
	public:
		datasv data;
		Node *pnext = NULL;
};
class List
{
	public:
		Node *phead = NULL;
		Node *ptail = NULL;
		void Add();
		void Print();
};
void List:: Add()
{
	string a;cin>>a;
	int z;cin>>z;
	cin.ignore();
	fflush(stdin);
    if (phead == NULL)
    {
        Node *newnode = new Node;
        newnode->data.ten =a;
		newnode->data.tuoi=z;
        phead = ptail = newnode;
    }
    else
    {
        Node *newnode = new Node;
        newnode->data.ten =a;
		newnode->data.tuoi=z;
        ptail->pnext = newnode;
        ptail = newnode;
    }
}
void List::Print()
{
    if (phead == NULL)
    {
        cout << "Rong";
        return;
    }
    for (Node *i = phead; i != NULL; i = i->pnext)
    {
        cout <<i->data.ten<<" "<<i->data.tuoi<<endl;
    }
}
int main()
{
    List ml;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        ml.Add();
    // ml.Print();
    // cout<<endl;
    // cout<<ml.Size();
    // cout<<endl;
    // int x;cin>>x;
    // cout<<ml.Find(x);
    // cout<<endl;
    // ml.Sort();
    // ml.Print();
    // int x,y;cin>>x>>y;
    // ml.Insert_1(x,y);
    // ml.Insert_2(x,y);
    ml.Print();
    return 0;
}
