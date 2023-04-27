#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node * pnext= NULL;
        Node * pprev= NULL;
};

class DLL 
{
    public:
        Node * phead;
        Node * ptail;
        DLL()
        {
            phead= ptail = NULL;
        }
        void add(int);
        void print();
        int Find(int);
        int Size();
        void Insert_1(int ,int );
        void Insert_2(int ,int );
        void swapLL(int x,int y);
        void Delete(int x);
};
void DLL:: add(int x)
{
    Node * newnode = new Node;
    newnode->data=x;
    if(phead == NULL)
    {
        phead=ptail= newnode;
        newnode->pprev= NULL;
    }
    else 
    {
        ptail->pnext = newnode;
        newnode->pprev= ptail;
        ptail = newnode;
    }
}
void DLL :: print()
{
    if(phead == NULL) return;
    for(Node * i = phead; i!= NULL ; i=i->pnext)
        cout<<i->data<<" ";
    // for(Node * i =ptail ; i!=NULL ;i=i->pprev)
    //     cout<<i->data<<" ";
}
int DLL:: Find(int x)
{
    if(phead== NULL) return 0;
    for(Node * i = phead ; i!= NULL ; i=i->pnext)
        if(i->data == x)    return 1;
    return 0;
}
int DLL:: Size()
{
    if(phead == NULL ) return 0;
    int cnt=0;
    for(Node * i = phead ; i!= NULL ; i=i->pnext) cnt++;
    return cnt;
}
void DLL :: Insert_1(int x,int y)
{
    Node * newnode = new Node;
    newnode->data=x;
    Node * ptemp = phead;
    Node * rtemp = NULL;
    if(Find(y)==0) return;
    while(ptemp->data != y)
    {
        rtemp =ptemp;
        ptemp=ptemp->pnext;
    }
    if(ptemp == phead)
    {
        phead = newnode;
        newnode->pnext = ptemp;
        newnode->pprev =NULL;
        ptemp->pprev = newnode;
    }
    else 
    {
        rtemp->pnext = newnode;
        newnode->pprev = rtemp;
        newnode->pnext = ptemp;
        ptemp->pprev = newnode;
    }
}
void DLL:: Insert_2(int x, int y)
{
    Node * newnode = new Node;
    newnode->data=x;
    Node * ptemp = phead;
    Node * rtemp = NULL;
    if(phead == NULL)   return;
    int cnt=1;
    while(cnt !=y)
    {
        cnt++;
        rtemp = ptemp;
        ptemp = ptemp->pnext;
    }
    if(ptemp == phead)
    {
        phead= newnode;
        newnode->pnext = ptemp;
        newnode->pprev = NULL;
        ptemp->pprev = newnode;
    }
    else 
    {
        rtemp->pnext = newnode;
        newnode->pprev = rtemp;
        newnode->pnext = ptemp;
        ptemp->pprev = newnode;
    }
}
void DLL :: swapLL(int x,int y)
{
    if(x>y) swap(x,y);
    int cnt=0;
    Node * t1 = new Node;
    Node * t2 = new Node;
    for(Node * i = phead; i!= NULL ;i=i->pnext)
    {
        cnt++;
        if(cnt==x) t1->data = i->data;
        else if(cnt==y) t2->data = i->data;
    }
    cnt=0;
    for(Node * i = phead; i!= NULL ;i=i->pnext)
    {
        cnt++;
        if(cnt==x) i->data = t2->data;
        else if(cnt==y) i->data = t1->data;
    }
}
void DLL :: Delete(int x)
{
    if(Find(x)==0) return; 
    for(Node * i =phead; i!= NULL ; i=i->pnext)
    {
        if(i->data ==x)
        {
            if(i->pnext == NULL)
            {
                i->pprev ->pnext = NULL;
                ptail = ptail->pprev;
            }
            else if(i->pprev == NULL)
            {
                i->pnext->pprev =  NULL;
                phead = phead ->pnext;
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
    DLL dl;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        dl.add(x);
    }
    // int x,y;cin>>x>>y;
    // dl.Insert_1(x,y);
    // dl.Insert_2(x,y);
    // dl.swapLL(x,y);
    int x; cin>>x;
    dl.Delete(x);
    dl.print();
    return 0;
}