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
        void add(int);
        void LNR(Node * subroot);
        int Find(int);
        Node * Delete(Node* ,int );
        int Degree_Of_Node(int );
        int Heigth_Of_BST (Node * subroot);
};
void BST::add(int x)
{
    Node * tmp = root;
    Node * newnode = new Node(x);
    if(root== NULL)
        root = newnode;
    else 
    {
        while(tmp!= NULL)
        {
            if(x > tmp->data)
            {
                if(tmp->pright == NULL) 
                {
                    tmp->pright = newnode;
                    return;
                }
                tmp = tmp->pright;
            }
            else 
            {
                if(tmp->pleft == NULL)
                {
                    tmp->pleft = newnode;
                    return;
                }
                tmp=tmp->pleft;
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
int BST:: Find(int x)
{
    Node * tmp = root;
    if(tmp == NULL)
        return 0;
    else
    {
        while(tmp!= NULL)
        {
            if(x > tmp->data) tmp= tmp->pright;
            else if(x < tmp->data) tmp = tmp->pleft;
            else return 1;
        }
    }
    return 0;
}
Node * Minvalue(Node * node)
{
    Node * tmp = node;
    while(tmp->pleft != NULL)
        tmp= tmp->pleft;
    return tmp;
}
Node * BST :: Delete (Node * subroot , int key)
{
    if(subroot == NULL)
        return subroot;
    if(key < subroot->data) subroot->pleft = Delete(subroot->pleft ,key);
    else if(key> subroot->data) subroot->pright = Delete(subroot->pright, key);
    else
    {
        if(subroot->pleft == NULL && subroot->pright== NULL)
        {
            if(subroot->data == key)
                root =  NULL;
            return NULL;
        }
        else if(subroot->pleft== NULL)
        {
            Node * tmp = subroot->pright;
            free(subroot);
            return tmp;
        }
        else if(subroot->pright == NULL);
        {
            Node * tmp = subroot->pleft;
            free(subroot);
            return tmp;
        }
        Node *tmp = Minvalue(subroot->pright);
        subroot->data = tmp->data;
        subroot->pright = Delete(subroot->pright , tmp->data);
    }
    return subroot;
}
int BST :: Degree_Of_Node(int x)
{
    Node * tmp = root;
    int cnt=1;
    if(root == NULL)
        return 0;
    while(tmp!= NULL)
    {
        if(x > tmp->data )
            tmp=tmp->pright;
        else if(x < tmp->data)
            tmp= tmp->pleft;
        else   return cnt;
        cnt++;
    }
    return 0;
}
int BST :: Heigth_Of_BST(Node* subroot)
{
    int cnt=1;
    if(subroot == NULL) return -1;
    while(subroot != NULL)
    {
        if(subroot->pleft != NULL ) subroot= subroot->pleft;
        else if(subroot->pright != NULL) subroot= subroot->pright;
        else   return cnt;
        cnt++;
    }
    return cnt;
}
int main()
{
    BST mt;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        mt.add(x);
    }
    // mt.LNR(mt.root);
    int z;cin>>z;
    // cout<<mt.Find(z);
    // mt.Delete(mt.root, z);
    // mt.LNR(mt.root);
    // cout<<mt.Degree_Of_Node(z);
    cout<<mt.Heigth_Of_BST(mt.root);
    return 0;
}