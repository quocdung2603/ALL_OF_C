#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node * pnext=NULL;
};
class List
{
    public:
        Node * phead = NULL;
        Node * ptail = NULL;
        void add(int);
        void print();
        int Find(int);
        int Size();
        void Sort();
        void Insert_1(int ,int );
        void Insert_2(int,int );
        void Delete(int x);
};
void List::add(int x)
{
    if(phead== NULL)
    {
        Node * newnode = new Node;
        newnode->data = x;
        phead = ptail = newnode;
    }
    else 
    {
        Node * newnode = new Node;
        newnode->data = x;
        ptail->pnext = newnode;
        ptail= newnode;
    }
}
void List :: print()
{
    if(phead == NULL)
        return;
    for(Node * i = phead ; i!= NULL; i=i->pnext)
        cout<<i->data<<" ";
}
int List:: Find(int x)
{
    if(phead== NULL)
        return 0;
    for(Node*i = phead; i!=NULL ; i=i->pnext)
        if(i->data ==x )
            return 1;
    return 0;
}
int List:: Size()
{
    int cnt=0;
     if(phead== NULL)
        return 0;
    for(Node*i = phead; i!=NULL ; i=i->pnext)
        cnt++;
    return cnt;
}
void List:: Sort()
{
    for(Node * i = phead ; i!=NULL ;i=i->pnext)
    {
        for(Node * j=i->pnext; j!= NULL ; j=j->pnext)
        {
            if(i->data > j->data)
                swap(i->data, j->data);
        }
    }
}
void List :: Insert_1(int x,int y)
{
    Node *  ptemp = phead;
    Node * pprev = NULL;
    Node * newnode = new Node;
    newnode->data=x;
    if(Find(y)==0)  return;
    while(ptemp->data != y)
    {
        pprev = ptemp;
        ptemp = ptemp->pnext;
    }
    if(ptemp == phead)
    {
        phead=newnode;
        newnode->pnext = ptemp;
    }
    else
    {
        pprev->pnext = newnode;
        newnode->pnext = ptemp;
    }
}
void List:: Insert_2(int x,int y)
{
    Node * ptemp = phead;
    Node * pprev = NULL;
    Node * newnode = new Node;
    newnode->data =x;
    int d= Size();
    int cnt=1;
    while(cnt != y)
    {
        cnt++;
        pprev = ptemp;
        ptemp = ptemp->pnext;
    }
    if(ptemp == phead)
    {
        phead= newnode;
        newnode->pnext = ptemp;
    }
    else
    {
        pprev->pnext = newnode;
        newnode->pnext = ptemp;
    }
}
void List :: Delete(int x)
{
    Node * ptemp = phead;
    Node * pprev = NULL;
    if(Find(x)==0) return;
    while(ptemp->data != x)
    {
        pprev= ptemp;
        ptemp= ptemp ->pnext;
    }
    if(ptemp == phead)
        phead= phead->pnext;
    else if(ptemp == ptail)
        pprev->pnext = NULL;
    else 
    {
        pprev->pnext = ptemp->pnext;
    }
    delete(ptemp);
}
int main()
{
    List l;
    int n;cin>>n;
    for(int i=0;i<n;i++)    
    {
        int x;cin>>x;
        l.add(x);
    }
    // l.print();
    int x;cin>>x;
    // cout<<l.Find(x);
    // cout<<l.Size();
    // l.Sort();
    // l.print();
    // int x,y;cin>>x>>y;
    // l.Insert_1(x,y);
    // l.Insert_2(x,y);
    l.Delete(x);
    l.print();
    return 0;
}