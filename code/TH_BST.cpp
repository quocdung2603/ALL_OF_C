#include <bits/stdc++.h>
using namespace std;
class Node
{
    public : 
        int data;
        Node* pLeft; 
        Node * pRight;
        Node(int input)
		{
		       data = input;
		       pLeft = pRight = NULL;
		}
		Node();
};

class BST
{
    public:
    Node *root;
//   	bool addNode(int);
//   	void inorder(Node*visit); //Khai bao truoc ham them Node vao BST
//	int heightBST(Node*);
	Node* deleteNode(Node*,int);
    
};

bool BST::addNode (int in) //Hien thuc ham them Node vao BST
{
    Node* tmp = root;
    Node* newnode = new Node;
    newnode->data=in;
	newnode->pLeft = newnode->pRight=NULL;
    if(root == NULL)
    {
        root=newnode;
        return 1;
    }
    else 
    {
        while(tmp !=NULL)
        {
            if(in > tmp->data)
            {
                if(tmp->pRight==NULL)
                {
                	tmp->pRight = newnode;
                	return 1;
				}
				tmp = tmp->pRight;
            }
            else if(int < tmp->data)
            {
            	if(tmp->pLeft==NULL)
            	{
            		tmp->pLeft=newnode;
            		return 1;
				}
				tmp=tmp->pLeft;
			}
			else return 0;
        }
    }
    return 0;
}
void BST:: inorder(Node* visit)
{
    inorder(visit->pLeft);
    cout<<visit->data;
    inorder(visit->pRight);
}
int BST::findNode(int data)
{
	if(root== NULL)
		return 0;
	else 
	{
		Node* tmp= root;
		while(tmp!=NULL)
		{
			if(data > tmp->data)
				tmp=tmp->pRight;
			else if(data < tmp->data)
				tmp=tmp->pLeft;
			else if(data==tmp->data)
				return 1;
		}
		return 0;
	}
}
int BST::degreeOf(int data)
{
	int cnt=0;
    if(root==NULL)
		return 0;
	else 
	{
		Node*tmp=root;
		while(tmp!=NULL)
		{
			if(data > tmp->data)
			{
				tmp=tmp->pRight;
				cnt++;
			}
			else if(data < tmp->data)
			{
				tmp=tmp->pLeft;
				cnt++;
			}
			else if(data==tmp->data)
				return cnt;
		}
		return 0;
	}
}

int BST::heightBST(Node* subroot)
{
    int cnt=1;
	while(subroot!=NULL)
	{
		if(subroot->pRight != NULL) subroot=subroot->pRight;
		else if(subroot->pLeft !=NULL) subroot=subroot->pLeft;
		else 
			return cnt;
		cnt++;
	}
	return cnt;
}
Node* minValueNode(Node* node)
{
    Node* current = node;
  
    /* loop down to find the leftmost leaf */
    while (current && current->pLeft != NULL)
        current = current->pLeft;
  
    return current;
}
Node* BST::deleteNode(Node* sub, int key)
{
	
	if (sub == NULL)
        return sub;

    if (key < sub->data)
        sub->pLeft = deleteNode(sub->pLeft, key);
  
    else if (key > sub->data)
        sub->pRight = deleteNode(sub->pRight, key);
  
  
    else {
        
        if (sub->pLeft==NULL and sub->pRight==NULL)
         {
            if(key == root->data) {
                root = NULL;
            }
             return NULL;
         }
        else if (sub->pLeft == NULL) {
            Node* temp = sub->pRight;
            free(sub);
            return temp;
        }
        else if (sub->pRight == NULL) {
            Node* temp = sub->pLeft;
            free(sub);
            return temp;
        }
        Node* temp = minValueNode(sub->pRight);
        sub->data = temp->data;
        sub->pRight = deleteNode(sub->pRight, temp->data);
    }
    return sub;
}
int main()
{
	
	return 0;
}
