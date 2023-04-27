#include <bits/stdc++.h>
using namespace std;
class datasv
{
	public:
		int mssv, diem;
		char gt;
};
class Node
{
	public:
	    datasv data;
	    Node* pLeft;
	    Node* pRight;
};
class BST
{
    public:
        Node* root;
        bool addNode(datasv);
        void LNR(Node*);
};
bool BST::addNode (datasv in)
{
    Node* temp = root;
    Node* newNode = new Node;
    newNode->data = in;
    newNode->pLeft = newNode->pRight = NULL;
    if (root == NULL)
    {
    	root = newNode;
    	return 1;
	} else
	{
		while (!(temp == NULL))
		{
			if (in.a > temp->data.a)
			{
				if (temp->pRight==NULL)
				{
					temp->pRight = newNode;
					return 1;
				}
				temp = temp->pRight;
			} else if (in.a < temp->data.a)
			{
				if (temp->pLeft==NULL)
				{
					temp->pLeft = newNode;
					return 1;
				}
				temp = temp->pLeft;
			} else return 0;
		}
	}
	return 0;
}
void BST::LNR(Node* subroot)
{
    if (subroot == NULL) return;
    else
    {
        LNR(subroot->pLeft);
        cout << subroot->data.a << endl << subroot->data.b << endl << subroot->data.c << endl;
        LNR(subroot->pRight);
    }
}
bool check(SV x)
{
	return (to_string(x.a)).size()==4 && x.b>=0 && x.b<=10 && (x.c=='M' || x.c=='F' || x.c=='N');
}
int main()
{
	BST tree;
	int n; cin >> n;
	for (int i=0; i<n; i++)
	{
		SV x;
		cin >> x.a >> x.b >> x.c;
		if (check(x)) tree.addNode(x);
	}
	tree.LNR(tree.root);
	return 0;
}