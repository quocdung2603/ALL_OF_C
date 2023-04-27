// class Node
// {
//     public : 
//         int data;
//         Node* pLeft; 
//         Node * pRight;
//         Node(int input)
// 		{
// 		       data = input;
// 		       pLeft = pRight = NULL;
// 		}
// 		Node();
// };

// class BST
// {
//     public:
//     Node *root;
// //   	bool addNode(int);
// //   	void inorder(Node*visit); //Khai bao truoc ham them Node vao BST
// 	int heightBST(Node*);
// // 	Node* deleteNode(Node*,int);
    
// };
// int BST::heightBST(Node* subroot)
// {
//     int cnt=1;
// 	while(subroot!=NULL)
// 	{
	
// 		if(subroot->pLeft !=NULL) 
// 		    subroot=subroot->pLeft;
// 		else if(subroot->pRight != NULL) 
// 		    subroot=subroot->pRight;
// 		else 
// 			return cnt;
// 		cnt++;
// 	}
// 	return cnt;
// }