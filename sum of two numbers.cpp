using namespace std;
#include<stdio.h>
#include <bits/stdc++.h>
int main(){
		int arr[10],n,sum;
		printf("enter no of elements");
		scanf("%d",&n);
		printf("Enter elements is array\n");
		for(int i=0;i<n;i++)
			scanf("\n%d",&arr[i]);
		sort(arr,arr+n);
		printf("Enter sum you want to find");
		scanf("%d",&sum);
		int l=0,r=n-1;
		while(l<r){
			if(arr[l]+arr[r]==sum){
				printf("Sum exist");
				return 0;
		}
			else if(arr[l]+arr[r]<sum)
				l++;
			else
				r--;
		}
		for(int i=0;i<n;i++){
			printf("\n%d",arr[i]);
		}
	}
