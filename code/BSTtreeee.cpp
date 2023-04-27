#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node* pLeft;
		Node* pRight;
		Node(int input)
		{
			data=input;
			pLeft=pRight=NULL;
		}
		Node();
};

class BTree
{
	public:
		Node* root;
		BTree()
		{
			root=NULL;
		}
		void addBST(int data)
		{
			Node* pTemp =root;
			Node* newnode = new Node(data);
			if(root==NULL)
				root=newnode;
			else 
			{
				while(pTemp!=NULL)
				{
					if(data > pTemp->data)
					{
						if(pTemp->pRight == NULL)
						{
							pTemp->pRight = newnode;
							return;
						}
						pTemp =pTemp->pRight;
					}
					else
					{
						if(pTemp->pLeft ==NULL)
						{
							pTemp->pLeft=newnode;
							return;
						}
						pTemp=pTemp->pLeft;
					}
				}
				
			}
		}
		void LNR(Node* subroot)
		{
			if(subroot==NULL)
				return;
			LNR(subroot->pLeft);
			cout<<subroot->data;
			LNR(subroot->pRight);
		}
};


int main()
{
	BTree mytree;
	mytree.addBST(8);
	mytree.addBST(2);
	mytree.addBST(10);
	mytree.addBST(0);
	mytree.addBST(3);
	mytree.addBST(9);
	mytree.addBST(1);
	cout<<"----------------------" <<endl;
	mytree.LNR(mytree.root);
	return 0;
}
