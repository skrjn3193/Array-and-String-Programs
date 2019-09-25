#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 

struct node 
{ 
	int data; 
	struct node* left; 
	struct node* right; 
}; 


int isBST(struct node* node,int min,int max) 
{ 
if (node==NULL) 
	return 1;
if (node->data < min || node->data > max)
	return 0;  
return
	isBST(node->left, min, node->data-1) && 
	isBST(node->right, node->data+1, max); 
} 
struct node* newNode(int data) 
{ 
struct node* node = (struct node*) 
					malloc(sizeof(struct node)); 
node->data = data; 
node->left = NULL; 
node->right = NULL; 

return(node); 
} 

int main() 
{ 
struct node *root = newNode(9); 
root->left	 = newNode(6); 
root->right	 = newNode(5); 
root->left->left = newNode(1); 
root->left->right = newNode(3); 

if(isBST(root,INT_MIN,INT_MAX)) 
	printf("Is BST"); 
else
	printf("Not a BST"); 
	
return 0; 
} 

