#include<stdio.h>
int main(){
	int arr[20],arr1[10]={0},i,j;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		arr1[arr[i]]++;
	}
	for(i=0;i<10;i++){
		printf("%d",arr1[i]);
}
	return 0;
}
