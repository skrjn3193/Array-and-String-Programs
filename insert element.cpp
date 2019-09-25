#include<stdio.h>
int main(){
		int arr[10],n,pos;
		printf("Enter elements is array\n");
		for(int i=0;i<5;i++)
			scanf("%d",&arr[i]);
		printf("enter element to insert\n");
		scanf("%d",&n);
		printf("enter position to insert");
		scanf("%d",&pos);
		for(int i=pos-1;i<5;i++){
			arr[i+1]=arr[i];
			printf("hello");
		}
		arr[pos-1]=n;
		for(int i=0;i<6;i++){
			printf("\n %d",arr[i]);
		}
}
