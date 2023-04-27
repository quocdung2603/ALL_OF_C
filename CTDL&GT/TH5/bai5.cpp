// class Node
// {
//     public : 
//         int data;
//         Node* pLeft; 
//         Node * pRight;
//         Node(int input)
//     	{
//     	       data = input;
//     	       pLeft = pRight = NULL;
//     	}
//     	Node();
// };

// class BST
// {
//     public:
//     Node *root;
// //   bool addNode(int);
// //   void inorder(Node*visit); //Khai bao truoc ham them Node vao BST
//     int findNode(int);
// };
// int BST::findNode(int data)
// {
// 	if(root== NULL)
// 		return 0;
// 	else 
// 	{
// 		Node* tmp= root;
// 		while(tmp!=NULL)
// 		{
// 			if(data > tmp->data)
// 				tmp=tmp->pRight;
// 			else if(data < tmp->data)
// 				tmp=tmp->pLeft;
// 			else if(data==tmp->data)
// 				return 1;
// 		}
// 		return 0;
// 	}
// }