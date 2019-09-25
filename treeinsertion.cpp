#include<iostream>
#include<queue>
using namespace std;

struct Node{
	int data;
	struct Node *left,*right;
};

struct Node* newNode(int item){
	struct Node *temp=new Node;
	temp->data=item;
	temp->left=temp->right=NULL;
	return temp;
}

struct Node* insert(struct Node* Node,int data){
	if(Node==NULL)
		return newNode(data);
	else if(data<Node->data)
		Node->left=insert(Node->left,data);
	else
		Node->right=insert(Node->right,data);
	
	return Node;
}

bool search(struct Node* root,int key){
	
	while(root!=NULL){
		if(key>root->data)
			root=root->right;
		else if(key<root->data)
			root=root->left;
		else 
			return true;
	}
}

void display(struct Node* node){
		
		if(node==NULL)
			return;
		cout<<node->data<<" ";
		display(node->right);
		display(node->left);
		
}
void level(struct Node* root){
	queue<struct Node*>q;
	if(!root)
		return;
	q.push(root);
 	while(q.empty()==false){
		struct Node* temp=q.front();
		q.pop();
		cout<<temp->data<<" ";
		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
	}
}
int main(){
	int ele;
	struct Node *root=NULL;
	root=insert(root,50);
	insert(root,30);
	insert(root,20);
	insert(root,40);
	insert(root,60);
	insert(root,80);
	insert(root,70);
	insert(root,90);
	cout<<"Elements in tree are : \n";
	display(root);
	
	cout<<"\nEnter element you want to search in given tree";
	cin>>ele;
	
	if(search(root,ele))
		cout<<"Yes, item found in tree";
	else
		cout<<"Not Found";
		
	cout<<"\nLevel order traversing\n";
	
	level(root);


	
}
