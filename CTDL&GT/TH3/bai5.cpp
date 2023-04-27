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
//     	void printLL();
// };
// void doublyLL::addLastLL()
// {
// 	dataSV* x=new dataSV;
// 	cin>>x->svCode;
// 	cin>>x->svAge;
// 	cin>>x->svSex;
// 	if(pHead==NULL)
// 	{
// 		Node * newnode = new Node;
// 		newnode->data=x;
// 		pHead=pTail=newnode;
// 	}
// 	else 
// 	{
// 		Node *newnode = new Node;
// 		newnode->data=x;
// 		pTail->pNext=newnode;
// 		pTail=newnode;
// 	}
// }
// void doublyLL::printLL()
// {
// 	Node * newnode = new Node;
// 	newnode=pHead;
// 	while(newnode!=NULL)
// 	{
// 		cout<<newnode->data->svCode<<endl<<newnode->data->svAge<<endl<<newnode->data->svSex<<endl;
// 		newnode=newnode->pNext;
// 	}
// }