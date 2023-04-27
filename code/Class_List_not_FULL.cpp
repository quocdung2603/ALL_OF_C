#include <iostream>
#include <iomanip>

using namespace std;

class Node
{
public:
	int Data;
	Node* pNext= NULL;
};
class LinkedList
{
public:
	Node* pHead = NULL;
	Node* pTail =NULL;
	void ThemNode(); // Them gia tri x vao List
	void InList(); // In tat cac cac phan tu cua List
	int KichThuoc(); // Tra ve kich thuoc List
	int TimNode(int); //Kiem tra gia tri x co nam trong List hay khong
	void ChenNode(); // Chen Node X vao vi tri cua Node Y
};
int main()
{
	LinkedList* myList = new LinkedList;

	myList->ThemNode();
	myList->ThemNode();
	myList->ThemNode();
	myList->ThemNode();
	myList->InList();
//	cout<<"\nKich thuoc List la : "<<myList->KichThuoc();
//	myList->TimNode(2);
	myList->ChenNode();
	myList->InList();
	return 0;
}

void LinkedList::ThemNode()
{
	int x;
	cout << "\nNhap gia tri Node can them x =";
	cin >> x;
	if (pHead == NULL) //Kiem tra List rong hay khong
	{
		Node* newNode = new Node;
		newNode->Data = x;
		pHead = pTail = newNode;
	}
	else
	{
		Node* newNode = new Node;
		newNode->Data = x;
		pTail->pNext = newNode;
		pTail = newNode;
	}
}
void LinkedList::InList()
{
	Node* pTemp = new Node;
	pTemp = pHead;
	cout << "\nDanh sach cac phan tu cua Linked List:\n";
	while (pTemp != NULL)
	{
		cout << pTemp->Data << " -> ";
		pTemp = pTemp->pNext;
	}
}
int LinkedList::KichThuoc()
{
	Node* pTemp = new Node;
	pTemp = pHead;
	int size =0;
	while (pTemp != NULL)
	{
		size++;
		pTemp = pTemp->pNext;
	}
	return size;

}
int LinkedList::TimNode(int x)
{
	Node* pTemp = new Node;
	pTemp = pHead;
	while (pTemp != NULL)
	{
		if (pTemp->Data == x)
		{
			return 1;
		}
		pTemp = pTemp->pNext;
	}
	return 0;
}
void LinkedList::ChenNode()
{
	int x, y;
	Node* pTemp = new Node;
	Node* pPrev = new Node;    //Con tro dung de luu vi tri Node dung truoc Node pTemp
	pPrev = NULL;
	pTemp = pHead;
	cout << "\nNhap vao gia tri Node can them x = "; cin >> x;
	cout << "\nNhap vi tri Node can chen y = "; cin >> y;
	if (TimNode(y) == 0)
	{
		cout << "Node khong ton tai";
	}
	else
	{
		while (pTemp->Data != y)   //Dung pTemp tim toi Node can xoa (y)
		{
			pPrev = pTemp;
			pTemp = pTemp->pNext;
		}
		if (pTemp == pHead)       //Kiem tra Node can chen co phai Node dau List (Truong hop dac biet)
		{
			Node* newNode = new Node;
			newNode->Data = x;
			newNode->pNext = pTemp;
			pHead = newNode;
		}
		else                          //Truong hop binh thuong
		{
			Node* newNode = new Node;
			newNode->Data = x;
			newNode->pNext = pTemp;
			pPrev->pNext = newNode;
		}
	}
}
