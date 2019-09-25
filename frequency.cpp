#include<stdio.h>
int main(){
	long long n,num;
	int arr[10];
	printf("enter no to count frequency of every digit\n");
	scanf("%lld",&n);
	for(int i=0;i<10;i++){
		arr[i]=0;
	}
	while(n!=0){
		num=n%10;
		n=n/10;
		arr[num]=arr[num]+1;
	}
	for(int i=0;i<10;i++){
		printf("\nFrequency of digit %d is %d",i,arr[i]);
	}
}
