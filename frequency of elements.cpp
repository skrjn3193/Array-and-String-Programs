#include<stdio.h>
int main(){
	int arr[100],freq[100];
	int size,i,j,count;
	printf("enter size of array");
	scanf("%d",&size);
	printf("\nenter elements in array");
	for(i=0;i<size;i++){
		scanf("\n%d",&arr[i]);
		freq[i]=-1;
	}
	for(i=0;i<size;i++){
		count=1;
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
		freq[i]=count;
	}
	
	for(i=0;i,size;i++){
		printf(" %d Occurs in %d times in your array",arr[i],freq[i]);
	}
	
	
}
