#include<bits/stdc++.h>
using namespace std;

class Node
{
    public: 
        int data;
        Node *pnext = NULL;
        Node *pprev = NULL;
};
class Doubly_List
{
    public: 
        Node * phead = NULL; 
        Node * ptail = NULL;
        void add_node(int);
        void print_List();
        void swap_Node(int,int);
        void delete_Node(int);
};
void Doubly_List :: add_node(int data)
{
    Node * temp = phead;
    if(phead==NULL)
    {
        Node * newnode= new Node;
        newnode->data= data;
        phead = ptail = newnode;
    }
    else 
    {
        Node * newnode= new Node;
        newnode->data=data;
        ptail->pnext = newnode;
        ptail = newnode;
    }
}

void Doubly_List :: print_List()
{
    Node * ptemp = new Node;
    ptemp=phead;
     while(ptemp != NULL )
    {
        cout<<ptemp->data<<" ";
        ptemp=ptemp->pnext;
    }
}

void Doubly_List :: swap_Node(int x,int y)
{
    if(x>y) swap(x,y);
    int cnt=-1;
    Node * t1 = new Node;
    Node * t2 = new Node;
    for(Node * i = phead ; i!=NULL ;i=i->pnext)
    {
        cnt++;
        if(cnt==x) 
            t1->data=i->data;
        else if(cnt==y) 
            t2->data=i->data;

    }
    cnt=-1;
    for(Node * i = phead ; i!=NULL ;i=i->pnext)
    {
        cnt++;
        if(cnt==x) 
            i->data=t2->data;
        else if(cnt==y) 
            i->data=t1->data;

    }
}
void Doubly_List :: delete_Node(int x)
{
    int cnt=-1;
    for(Node *i =phead ; i!=NULL ;i=i->pnext)
    {
        cnt++;
        if(cnt==x)
        {
            if(i->pnext==NULL)
            {
                i->pprev->pnext=NULL;
                ptail=ptail->pprev;
            }
            else if(i->pprev == NULL)
            {
                i->pnext->pprev = NULL;
                phead= phead->pnext;
            }
            else 
            {
                i->pprev->pnext = i->pnext;
                i->pnext->pprev = i->pprev;
            }
        }
    }
}
int main()
{
    Doubly_List myll;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int z;cin>>z;
        myll.add_node(z);
    }
    myll.print_List();
    // cout<<endl;
    // myll.swap_Node(1,3);
    // myll.print_List();
    cout<<endl;
    myll.delete_Node(2);
    myll.print_List();
    return 0;
}