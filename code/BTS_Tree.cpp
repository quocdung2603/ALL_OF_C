#include<bits/stdc++.h>
using namespace std;

class Node
{
    public: 
        int data;
        Node * pleft;
        Node * pright;
        Node (int input)
        {
            data=input;
            pleft = pright = NULL;
        }
        Node();
};
class BST
{
    public: 
        Node * root;
        BST()
        {
            root = NULL;
        }
        void Add_Node(int);
        void LNR(Node* subroot);
        int Find_Node(int);
        int Degree_Of_Node(int);
        int Height_Of_BST(Node * subroot);
        Node * Delete_Node(Node *, int);
};
void BST :: Add_Node(int data)
{
    Node * ptemp =root;
    Node * newnode = new Node(data);
    if(root == NULL)
        root  = newnode;
    else 
    {
        while(ptemp != NULL)
        {
            if(data > ptemp->data)
            {
                if(ptemp->pright == NULL)
                {
                    ptemp->pright=newnode;
                    return;
                }
                ptemp=ptemp->pright;
            }
            else 
            {
                if(ptemp->pleft == NULL)
                {
                    ptemp->pleft = newnode;
                    return;
                }
                ptemp=ptemp->pleft;
            }
        }
    }
}
void BST :: LNR(Node * subroot)
{
    if(subroot == NULL)
        return;
    LNR(subroot->pleft);
    cout<<subroot->data<<" ";
    LNR(subroot->pright);
}
int  BST :: Find_Node(int data)
{
    Node * tmp = root;
    if(root == NULL)    
        return 0;
    else 
    {
        while(tmp != NULL)
        {
            if(data > tmp->data)
                tmp=tmp->pright;
            else if(data < tmp->data)
                tmp=tmp->pleft;
            else if(data == tmp->data)
                return 1;
        }
    }
    return 0;
}
int  BST :: Degree_Of_Node(int data)
{
    Node * ptemp = root;
    if(root == NULL)
        return -1;
    else 
    {
        int cnt=1;
        while(ptemp != NULL)
        {
            if(data > ptemp ->data)
            {
                cnt++;
                ptemp= ptemp ->pright;
            }
            else if(data < ptemp->data)
            {
                cnt++;
                ptemp= ptemp ->pleft;
            }
            else 
                return cnt;
        }
    }
    return -1;
}
int  BST :: Height_Of_BST(Node * subroot)
{
    int cnt=1;
    if(subroot == NULL)
        return -1;
    while(subroot != NULL)
    {
        if(subroot->pleft != NULL)
            subroot=subroot->pleft;
        else if(subroot->pright != NULL)
            subroot=subroot->pright;
        else 
            return cnt;
        cnt++;
    }
    return cnt;
}
Node * Minvalue(Node * node)
{
    Node * tmp = node;
    while(tmp->pleft != NULL)
        tmp = tmp->pleft;
    return tmp;
}
Node* BST :: Delete_Node(Node * subroot , int key)
{
    if(subroot== NULL)
        return subroot;
    if(key < subroot->data) 
        subroot->pleft = Delete_Node(subroot->pleft , key);
    else if(key >subroot->data) 
        subroot->pright = Delete_Node(subroot ->pright, key);
    else 
    {
        if(subroot->pleft == NULL && subroot->pright == NULL)
        {
            if(key == root->data)
                root=NULL;
            return NULL;
        }
        else if(subroot ->pleft ==NULL)
        {
            Node * temp= subroot->pright;
            free(subroot);
            return temp;
        }
        else if(subroot->pright == NULL)
        {
            Node * temp = subroot->pleft;
            free(subroot);
            return temp;
        }
        Node * temp = Minvalue(subroot->pright);
        subroot->data= temp->data;
        subroot->pright = Delete_Node(subroot->pright , temp->data);
    }
    return subroot;
}


int main()
{
    BST mytree;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int z;cin>>z;
        mytree.Add_Node(z);
    }
    mytree.LNR(mytree.root);
    int x;cin>>x;
    cout<<"\nFind_Node "<<x<<": "<<mytree.Find_Node(x);
    cout<<"\nMuc cua Node "<<x<<": "<<mytree.Degree_Of_Node(x);
    cout<<"\nHeight_Of_BST: "<<mytree.Height_Of_BST(mytree.root);
    cout<<"\nXoa node ";
    mytree.Delete_Node(mytree.root , 3);
    mytree.LNR(mytree.root);
    return 0;
}