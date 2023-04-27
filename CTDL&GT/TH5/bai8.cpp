
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
//     // bool addNode(int);
//     // void inorder(Node*visit); //Khai bao truoc ham them Node vao BST
//     int path(int); //Khai bao truoc ham
    
// };

// int BST::path(int data)
// {
// 	int cnt=0;
//     if(root==NULL)
// 		return 0;
// 	else 
// 	{
// 		Node*tmp=root;
// 		while(tmp!=NULL)
// 		{
// 			if(data > tmp->data)
// 			{
// 				tmp=tmp->pRight;
// 				cnt++;
// 			}
// 			else if(data < tmp->data)
// 			{
// 				tmp=tmp->pLeft;
// 				cnt++;
// 			}
// 			else if(data==tmp->data)
// 				return cnt+1;
// 		}
// 		return 0;
// 	}
// }