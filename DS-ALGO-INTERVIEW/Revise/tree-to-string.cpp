/* C++ program to construct string from binary tree*/
#include <bits/stdc++.h> 
using namespace std; 

/* A binary tree node has data, pointer to left 
child and a pointer to right child */
struct Node { 
	int data; 
	Node *left, *right; 
}; 

/* Helper function that allocates a new node */
Node* newNode(int data) 
{ 
	Node* node = (Node*)malloc(sizeof(Node)); 
	node->data = data; 
	node->left = node->right = NULL; 
	return (node); 
} 

// Function to construct string from binary tree 
string treeToString(Node* root) 
{ 
    string s;
	if (root == NULL) 
		return s; 

	s=s+to_string(root->data);
	if(root->left)
	s=s+'('+treeToString(root->left)+')';
	if(root->right)
	s=s+'('+treeToString(root->right)+')';
	
	return s;
} 

// Driver Code 
int main() 
{ 
	/* Let us construct below tree 
				1 
			/ \ 
			2 3 
			/ \ \ 
			4 5 6 */
	struct Node* root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	root->right->right = newNode(6); 
	 
	cout <<treeToString(root);
} 
