using namespace std;
#include<stdio.h>
#include <bits/stdc++.h>
int main(){
		int arr[10],n,j,sum,flag=0;
		printf("enter no of elements");
		scanf("%d",&n);
		printf("Enter elements is array\n");
		for(int i=0;i<n;i++)
			scanf("\n%d",&arr[i]);
		for(int i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(arr[i]==arr[j] && i!=j)
					break;
		}
		if(j==n)
			printf("\n%d",arr[i]);
	}	
}
