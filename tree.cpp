#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *left,*right;
}*root=NULL,*ptr=NULL,*q;
void create(){
	cout<<"Tree created \n";
}

void search(){
cout<<"element found\n";	
}


void insert(){
	cout<<"inserted\n";
}




void deletion(){
	cout<<"Item Deleted\n";
}
int main(){
	int ch,x=1;
	while(x==1){
		cout<<"Enter your choice : \n 1. Create tree \n 2. Search for element \n 3. Inserting element in tree \n 4. Deletion of an element \n 0. Break"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				create();
				break;
			case 2:
				search();
				break;
			case 3:
				insert();
				break;
			case 4:
				deletion();
				break;
			case 0:
				x=0;
				break;
			default:
				cout<<"Please enter correct choice";
		}
	}
}
	
