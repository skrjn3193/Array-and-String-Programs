#include<stdio.h>
int main(){
	int a1[10],a2[10],i,j,n1,n2;

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
	i=0;j=0;
	while(i<n1 && j<n2){
		if(a1[i]==a2[j]){
			printf("\ncommon element is %d ",a1[i]);
			i++;
			j++;
		}
		else if(a1[i]<a2[j])
			i++;
		else
			j++;
	}
}
