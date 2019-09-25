#include<iostream>
using namespace std;
struct tree{
	tree *l,*r;
	int  data;
}*root=NULL,*p=NULL,*np=NULL,*q;

int main(){
	create();
	cout<<"Printing Traversal in inorder\n";
	inorder(root);
	cout<<"Printing traversal in preorder\n";
	preorder(root);
	cout<<"printing traversak in postorder\n";
	postorder(root);
}

void create(){
	int value,c=0;
	while(c<10){
		if(root==NULL){
			root=new tree;
			cout<<"Enter value of root node\n";
			cin>>root->data;
			root->l=NULL;
			root->r=NULL;
		}
		else{
			p=root;
			cout<<"enter value of node to insert\n";
			cin>>value;
			while(true){
				if(value<p->data){
					
				}
			}
		}
	}
}
