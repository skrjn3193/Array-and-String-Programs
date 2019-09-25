#include<stdio.h>
int main(){
int n,first,last,r;
printf("enter a number");
scanf("%d",&n);
first=n%10;
n=n/10;
while(n>0){
	r=n%10;
	n=n/10;
}
last=r;
printf("\n fisrt=%d \n last=%d",last,first);
printf("\nsum of first and last number of given digit is %d",first+last);

}		
