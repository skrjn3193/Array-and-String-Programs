#include<stdio.h>
int main(){
	int a1[10],a2[10],a3[10],i,j,k,n1,n2,n3;

	printf("\nenter size of 1st array");
	scanf("%d",&n1);	
	printf("\nEnter elements is ascending order");
	for(i=0;i<n1;i++)
		scanf("\t%d",&a1[i]);
	
	printf("\nenter size of 2nd array");
	scanf("%d",&n2);
	printf("\nEnter elements is ascending order");
	for(i=0;i<n2;i++)
		scanf("\t%d",&a2[i]);
	
	printf("\nenter size of 3rd array");
	scanf("%d",&n3);
	printf("\nEnter elements is ascending order");
	for(i=0;i<n3;i++)
		scanf("\t%d",&a3[i]);
	
	i=0,j=0,k=0;
	while(i<n1 && j<n2 && k<n3){
				if(a1[i]==a2[j] && a2[j]==a3[k]){
				
				printf("Common element is %d\t",a1[i]);
					i++,j++,k++;
				}
				
				else if(a1[i]<a2[j])
					i++;
				else if(a2[j]<a3[k])
					j++;
				else
					k++;	
		}
	}
