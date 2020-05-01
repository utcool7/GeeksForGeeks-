// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

//time : O(n)
//space : O(n)
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

/* Computes the height of binary tree with given root.  */

int height(Node* node)
{
   // Your code here
   if(node == NULL)
       return 0;
   return max(height(node->left),height(node->right)) + 1;       
}
