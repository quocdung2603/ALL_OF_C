#include<bits/stdc++.h>
using namespace std;

class Node
{
    public: 
        int data;
        Node  * pnext = NULL;
};

class CLL 
{
    public:
        Node * phead = new Node;
        Node * ptail = new Node;
        CLL()
        {
            phead = ptail = NULL;
        }
        void add(int);
        void print();
        int Find(int);
        int Size();
        void Insert_1(int,int);
        void Delete(int);
};
void CLL::add(int x)
{
    Node * newnode = new Node;
    newnode->data=x;
    Node * ptemp = phead;
    if(phead== NULL)
    {
        phead =ptail = newnode;
        ptail->pnext = phead;
    }
    else 
    {
        ptail->pnext= newnode;
        ptail = newnode;
        newnode->pnext = phead;
    }
}
void CLL:: print()
{
    if(phead == NULL) return;
    Node * newnode= phead;
    do 
    {
        cout<<newnode->data<<" ";
        newnode=newnode->pnext;
    }while(newnode != phead);
}
int CLL:: Find(int x)
{
    Node * newnode = phead;
    if(phead== NULL) return 0;
    do
    {
        if(newnode->data == x) return 1;
        newnode=newnode->pnext;
    }while(newnode != phead);
    return 0;
}
int CLL :: Size()
{
    int cnt=0;
    Node * newnode=phead;
    if(phead== NULL) return 0;
    do
    {
        cnt++;
        newnode=newnode->pnext;
    } while (newnode!=phead);
    return cnt;
}
void CLL :: Insert_1(int x,int y) // value
{
    Node * newnode =new Node;
    newnode->data =x;
    Node * ptemp = phead;
    Node * pprev = ptail;
    if(Find(y)==0) return;
    do
    {
        if(ptemp->data != y)
        {
            pprev = ptemp;
            ptemp=ptemp->pnext;
        }
        else break;
    }while(ptemp != phead);
    if(ptemp == phead)
    {
        pprev->pnext = newnode;
        newnode->pnext = ptemp;
        phead= newnode;
    }
    else
    {
        pprev->pnext = newnode;
        newnode->pnext = ptemp;
    }
}
void CLL:: Delete(int x)
{
    Node * ptemp = phead;
    Node * pprev = ptail;
    if(Find(x) == 0) return;
    do
    {
        if(ptemp->data !=x)
        {
            pprev = ptemp;
            ptemp=ptemp->pnext;
        }
        else break;
    } while (ptemp != phead);
    if(ptemp == phead)
    {
        pprev->pnext =ptemp->pnext;
        phead = ptemp->pnext;
        free(ptemp);
    }
    else if(ptemp == ptail)
    {
        pprev->pnext = ptemp->pnext;
        ptail = pprev; 
        free(ptemp);
    }
    else 
    {
        pprev->pnext = ptemp->pnext;
        free(ptemp);
    }
}
int main()
{
    CLL cl;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        cl.add(x);
    }
    cl.print();
    // int x,y;cin>>x>>y;
    // cout<<cl.Find(x);
    // cout<<cl.Size();
    // cl.Insert_1(x,y);
    // int x;cin>>x;
    // cl.Delete(x);
    // cl.print();
    return 0;
}