#include<stdio.h>
int fact(int n){
	return n?n*fact(n-1):1;
}
int main(){
	int n,sum=0,temp,r;
	printf("\Enenter number");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		sum=sum+fact(r);
		n=n/10;
	}
	if(sum==temp)
		printf("\t%d is Strong number",temp);
	else
		printf("\t%d is Not a Strong Number",temp);
}

