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
// 		int delNode(string); 
// };
// int doublyLL::delNode(string ms)
// {
// 	bool check=false;
//  	for(Node * i=pHead ; i!=NULL ; i=i->pNext)
//  	{
//  		if(i->data->svCode==ms)
//  		{
//  			if(i->pNext==NULL)
//  			{
//  				i->pPrev->pNext=NULL;
// 				pTail=pTail->pPrev;
// 			}
// 			else if(i->pPrev==NULL)
// 			{
// 				i->pNext->pPrev=NULL;
// 				pHead=pHead->pNext;
// 			}
// 			else 
// 			{
// 				i->pPrev->pNext=i->pNext;
// 				i->pNext->pPrev=i->pPrev;
// 			}
// 			check=true;
// 		}
// 	}
// 	if(check==true)	return 1;
// 	else 	return 0;
// }