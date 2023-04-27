#include<bits/stdc++.h>
using namespace std;
//=======khai báo cau truc danh sach lien ket don cac so nguyen========//
// khia bao cau truc 1 node
struct node
{
	int data;// du lieu trong 1 node
	struct node *pNext; // dung de lien ket gia cac node
};
typedef struct node NODE;
//khai bao cau truc danh sach
struct LIST
{
	NODE *pHead;
	NODE *pTail;
};
//========khoi tao cau truc danh sach lien ket don cac so nguyen=========//
void khoitao(LIST &l)
{
	// Cho 2 con tro la null =>danh sach chua có phan tu
	l.pHead=NULL;
	l.pTail=NULL;
}
// tao node
NODE *khoitaonode(int x)
{
	NODE *p=new NODE;// cap phat vung nho cho NODE p
	p->data=x;// truyen gia tri x cho data
	p->pNext=NULL;//khi khai báo  node chua lien ket den  node nào het=>con tro se tro den null
	return p; //tra vè node vua khoi tao
}
// them vao dau
void  themvaodau(LIST &l,NODE *p)
{
	if (l.pHead==NULL)
		l.pHead=l.pTail=p;
	else
	{
		p->pNext=l.pHead;
		l.pHead=p;
	}
}
void  themvaocuoi(LIST &l,NODE *p)
{
	if (l.pHead==NULL)
		l.pHead=l.pTail=p;
	else
	{
		l.pTail->pNext=p;
		l.pTail=p;
	}
}
// hàm cout
void xuat(LIST l)
{
	for (NODE *k=l.pHead ; k != NULL;k=k->pNext)
		cout<<k->data<<" ";
}
int main()
{
	LIST l;
	khoitao(l);
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
		{
			int x;
			cout<<"\nnhap gia tri x :";
			cin>>x;
			NODE *p=khoitaonode(x);// khoi tao 1 node so nguyen
			themvaodau(l,p);
		}
	cout<<"\ndanh sach lien ket\n";
	xuat(l);
	system("pause");
	return 0;
}
