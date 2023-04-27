#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *pnext = NULL;
};

class List
{
public:
    Node *phead = NULL;
    Node *ptail = NULL;
    void Add();
    void Print();
    int Size();
    int Find(int);
    void Sort();
    void Insert_1(int, int);
    void Insert_2(int, int);
    void Delete(int);
};

void List::Add()
{
    int x;
    cin >> x;
    if (phead == NULL)
    {
        Node *newnode = new Node;
        newnode->data = x;
        phead = ptail = newnode;
    }
    else
    {
        Node *newnode = new Node;
        newnode->data = x;
        ptail->pnext = newnode;
        ptail = newnode;
    }
}
void List::Print()
{
    if (phead == NULL)
    {
        cout << "Rong";
        return;
    }
    for (Node *i = phead; i != NULL; i = i->pnext)
    {
        cout << i->data << " ";
    }
}
int List::Size()
{
    int cnt = 0;
    if (phead == NULL)
    {
        return cnt;
    }
    for (Node *i = phead; i != NULL; i = i->pnext)
        cnt++;
    return cnt;
}
int List::Find(int x)
{
    for (Node *i = phead; i != NULL; i = i->pnext)
        if (i->data == x)
            return 1;
    return 0;
}
void List ::Sort()
{
    for (Node *i = phead; i != NULL; i = i->pnext)
    {
        for (Node *j = i->pnext; j != NULL; j = j->pnext)
        {
            if (i->data > j->data)
            {
                swap(i->data, j->data);
            }
        }
    }
}
void List::Insert_1(int x, int y)
{
    Node *newnode = new Node;
    newnode->data = x;
    Node *ptemp = new Node;
    Node *pprev = new Node;
    pprev = NULL;
    ptemp = phead;
    if (Find(y) == 0)
    {
        cout << "Not found";
        return;
    }
    while (ptemp->data != y)
    {
        pprev = ptemp;
        ptemp = ptemp->pnext;
    }
    if (ptemp == phead)
    {
        phead = newnode;
        newnode->pnext = ptemp;
    }
    else
    {
        newnode->pnext = ptemp;
        pprev->pnext = newnode;
    }
}
void List::Insert_2(int x, int y)
{
    Node *newnode = new Node;
    newnode->data = x;
    Node *ptemp = new Node;
    Node *pprev = new Node;
    ptemp = phead;
    pprev = NULL;
    int d = Size(), cnt = 1;
    if (y > d)
    {
        cout << "NO";
        return;
    }
    while (cnt != y)
    {
        cnt++;
        pprev = ptemp;
        ptemp = ptemp->pnext;
    }
    if (ptemp == phead)
    {
        phead = newnode;
        newnode->pnext = ptemp;
    }
    else
    {
        newnode->pnext = ptemp;
        pprev->pnext = newnode;
    }
}
void List ::Delete(int x)
{
    Node *ptemp = new Node;
    Node *pprev = new Node;
    ptemp = phead;
    pprev = ptemp;
    if (Find(x) == 0)
    {
        cout << "Not found x";
        return;
    }
    while (ptemp->data != x)
    {
        pprev = ptemp;
        ptemp = ptemp->pnext;
    }
    if (ptemp == phead)
        phead = phead->pnext;
    else if (ptemp == ptail)
    {
    	pprev->pnext = NULL;
    	// ptail=pprev;
	}
    else
        pprev->pnext = ptemp->pnext;
    delete (ptemp);
}
int main()
{
    List ml;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ml.Add();
    }
    // ml.Print();
    // cout<<endl;
    // cout<<ml.Size();
    // cout<<endl;
    // int x;cin>>x;
    // cout<<ml.Find(x);
    // cout<<endl;
    // ml.Sort();
    // ml.Print();
    // int x,y;cin>>x>>y;
    // ml.Insert_1(x,y);
    // ml.Insert_2(x,y);
    int x;
    cin >> x;
    ml.Delete(x);
    ml.Print();
    return 0;
}
