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
//     	void addLastLL();
// };
// void doublyLL::addLastLL()
// {
// 	dataSV* x=new dataSV;
// 	cin>>x->svCode;
// 	cin>>x->svAge;
// 	cin>>x->svSex;
// 	Node * newnode = new Node;
// 	newnode->data=x;
// 	if(pHead==NULL)
// 	{
// 		pHead=pTail=newnode;
// 	}
// 	else 
// 	{
// // 		Node *newnode = new Node;
// // 		newnode->data=x;
// 		pTail->pNext=newnode;
// 		pTail=newnode;
// 	}
// }