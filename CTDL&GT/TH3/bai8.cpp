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
//     	void printLL2();
    	
//     	void sortLL(); 
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
// void doublyLL::printLL2()
// {
// 	Node * newnode = new Node;
// 	newnode=pTail;
// 	while(newnode!=NULL)
// 	{
// 		cout<<newnode->data->svCode<<endl<<newnode->data->svAge<<endl<<newnode->data->svSex<<endl;
// 		newnode=newnode->pPrev;
// 	}
// }
// void doublyLL::sortLL()
// {
// 	for(Node*i=pHead ; i!=NULL; i=i->pNext)
// 	{
	
// 		for(Node*j=i;j!=NULL ; j=j->pNext)
// 		{
// 			if(i->data->svAge > j->data->svAge)
// 			{
// 				Node* tmp=new Node;
// 				tmp->data->svAge=i->data->svAge;
// 				i->data->svAge= j->data->svAge;
// 				j->data->svAge=tmp->data->svAge;
// 				tmp->data->svCode=i->data->svCode;
// 				i->data->svCode= j->data->svCode;
// 				j->data->svCode=tmp->data->svCode;
// 				tmp->data->svSex=i->data->svSex;
// 				i->data->svSex= j->data->svSex;
// 				j->data->svSex=tmp->data->svSex;
// 			}
// 		}
// 	}
// }