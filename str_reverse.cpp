#include<stdio.h>
int main(){
	char str[30],c;
	int i,j,n=0;
	printf("\nEnter String to reverse");
	gets(str);
	puts(str);
	for(i=0;str[i]!='\0';i++){
		n++;
	}
	//printf("%d",n);
	for(i=n-1,j=0;j<n/2;i--,j++){
		c=str[i];
		str[i]=str[j];
		str[j]=c;
		
	}
	puts(str);
	return 0;
}
