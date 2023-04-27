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
// //	int heightBST(Node*);
// 	Node* deleteNode(Node*,int);
    
// };

// Node* minValueNode(Node* node)
// {
//     Node* current = node;
  
//     /* loop down to find the leftmost leaf */
//     while (current && current->pLeft != NULL)
//         current = current->pLeft;
  
//     return current;
// }
// Node* BST::deleteNode(Node* sub, int key)
// {
	
// 	if (sub == NULL)
//         return sub;

//     if (key < sub->data)
//         sub->pLeft = deleteNode(sub->pLeft, key);
  
//     else if (key > sub->data)
//         sub->pRight = deleteNode(sub->pRight, key);
  
  
//     else {
        
//         if (sub->pLeft==NULL and sub->pRight==NULL)
//          {
//             if(key == root->data) {
//                 root = NULL;
//             }
//              return NULL;
//          }
//         else if (sub->pLeft == NULL) {
//             Node* temp = sub->pRight;
//             free(sub);
//             return temp;
//         }
//         else if (sub->pRight == NULL) {
//             Node* temp = sub->pLeft;
//             free(sub);
//             return temp;
//         }
//         Node* temp = minValueNode(sub->pRight);
//         sub->data = temp->data;
//         sub->pRight = deleteNode(sub->pRight, temp->data);
//     }
//     return sub;
// }