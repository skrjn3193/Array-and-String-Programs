#include<stdio.h>
int main(){
int n,rev,r,x;
printf("enter a number");
scanf("%d",&n);
x=n;
while(n>0){
	r=n%10;
	n=n/10;
	rev=rev*10+r;
}
if(x==rev){
	printf("the number is palindtrome");
}
else
printf("Not a palindtrome number");
	
}	
