// class dataSV
// {
//   public : 
//         string svCode ="";
//         int svAge =0;
//         char svSex ='O';
// };

// class Node
// {
//     public:
//         dataSV* data=new dataSV;
//         Node*pNext=NULL;
//         Node*pPrev=NULL;
// };
// class doublyLL
// {
//     public : 
//         Node*pHead=NULL;
//         Node*pTail=NULL;
//     	void swapLL(int, int);
// };
// void doublyLL::swapLL(int x, int y)
// {
// 	if (x>y) swap(x, y);
// 	int cnt=-1;
// 	dataSV* t1=new dataSV;
// 	dataSV* t2=new dataSV;
// 	for (Node* i=pHead; i!=NULL; i=i->pNext)
// 	{
// 		cnt++;
// 		if (cnt==x) t1=i->data;
// 		else if (cnt==y) t2=i->data;
// 	}
// 	cnt=-1;
// 	for (Node* i=pHead; i!=NULL; i=i->pNext)
// 	{
// 		cnt++;
// 		if (cnt==x) i->data=t2;
// 		else if (cnt==y) i->data=t1;
// 	}  
// }