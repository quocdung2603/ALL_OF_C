#include<bits/stdc++.h>
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
		
		void addBNode(int data)
		{
			queue<Node*> ListNode;
			Node* newNode=new Node(data);
			Node* temp=NULL;
			if(root==NULL)
			{
				root=newNode;
			}
			else
			{
				ListNode.push(root);
				while(!ListNode.empty())
				{
					temp=ListNode.front();
					ListNode.pop();
					if(temp->pLeft==NULL)
					{
						temp->pLeft=newNode;
						return;
					}
					else
					{
						if(temp->pRight==NULL)
						{
							temp->pRight=newNode;
							return;
						}
						else
						{
							ListNode.push(temp->pLeft);
							ListNode.push(temp->pRight);
						}
					}
				}
			}
		}
//		void aaaaa(node*subroot , node*newnode)
//		{
//			if(subroot->pLeft==NULL)
//				subroot->pLeft=newnode;
//			else
//			{
//				if(subroot->pRight==NULL)
//					subroot->pRight=newnode;
//				else 
//				
//			}
//		}
		void LNR(Node* subroot)
		{
			if(subroot==NULL)
				return;
			cout<<subroot->data;
			LNR(subroot->pLeft);
			LNR(subroot->pRight);
		}
		void NLR(Node*subroot)
		{
			stack<Node*> Listnode;
			Node*temp=subroot;
			Listnode.push(subroot);
			while(!Listnode.empty())
			{
				temp=Listnode.top();
				Listnode.pop();	
				cout<<temp->data;
				if(temp->pRight !=NULL)
				{
					Listnode.push(temp->pRight);
				}
				if(temp->pLeft !=NULL)
				{
					Listnode.push(temp->pLeft);
				}		
			}		
		}
};
	
	
int main()
{
	BTree myTree;
	myTree.addBNode(8);
	myTree.addBNode(2);
	myTree.addBNode(10);
	myTree.addBNode(0);
	myTree.addBNode(3);
	myTree.addBNode(9);
	myTree.addBNode(1);
	cout<<"Thu tu xuat\n";
	myTree.NLR(myTree.root);
	
}
