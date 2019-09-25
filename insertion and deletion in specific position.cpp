#include<stdio.h>
int main(){
		int arr[10],n,pos;
		printf("Enter elements is array\n");
		for(int i=0;i<8;i++)
			scanf("\n%d",&arr[i]);
		printf("enter element to insert\n");
		scanf("%d",&n);
		printf("enter position to insert");
		scanf("%d",&pos);
		for(int i=7;i>=pos;i--){
			arr[i+1]=arr[i];
		}
		arr[pos]=n;
		for(int i=0;i<8;i++)
			printf("\n%d",arr[i]);
		}
		
		
		
		
//#include<stdio.h>
//int main(){
//		int arr[10],n,pos;
//		printf("Enter elements is array\n");
//		for(int i=0;i<8;i++)
//			scanf("\n%d",&arr[i]);
//		printf("enter position to delete");
//		scanf("%d",&pos);
//		for(int i=pos;i<7;i++){
//			arr[i]=arr[i+1];
//		}
//		for(int i=0;i<7;i++)
//			printf("\n%d",arr[i]);
//		}
