// class Node
// {
// public:
//     int data;
//     Node *pLeft;
//     Node *pRight;
// };

// class BST
// {
// public:
//     Node *root;
//     bool addNode(int); // Khai bao truoc ham them Node vao BST
// };

// bool BST::addNode(int in) // Hien thuc ham them Node vao BST
// {
//     Node *tmp = root;
//     Node *newnode = new Node;
//     newnode->data = in;
//     newnode->pLeft = newnode->pRight = NULL;
//     if (root == NULL)
//     {
//         root = newnode;
//         return 1;
//     }
//     else
//     {
//         while (tmp != NULL)
//         {
//             if (in > tmp->data)
//             {
//                 if (tmp->pRight == NULL)
//                 {
//                     tmp->pRight = newnode;
//                     return 1;
//                 }
//                 tmp = tmp->pRight;
//             }
//             else if (in < tmp->data)
//             {
//                 if (tmp->pLeft == NULL)
//                 {
//                     tmp->pLeft = newnode;
//                     return 1;
//                 }
//                 tmp = tmp->pLeft;
//             }
//             else
//                 return 0;
//         }
//     }
//     return 0;
// }