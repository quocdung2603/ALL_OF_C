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
// 		void removeDuplicateNode();
// };
// void doublyLL::removeDuplicateNode()
// {
// 	for(Node*i=pHead; i!=NULL ; i=i->pNext)
// 	{
// 		for(Node *j=i->pPrev; j!=NULL ; j=j->pPrev)
// 		{
// 			if(i->data->svCode == j->data->svCode)
// 			{
// 				if(i->pNext==NULL)
// 				{
// 					i->pPrev->pNext=NULL;
// 					pTail=i->pPrev;
// 				}
// 				else 
// 				{
// 					i->pPrev->pNext=i->pNext;
// 					i->pNext->pPrev= i->pPrev;
// 				}
// 				break;
// 			}
// 		}
// 	}
// }