#include<stdio.h>
int main(){
	char str[20];
	int i,len;
	printf("\n enter string to convert");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]>=65 && str[i]<=90)
			str[i]+=32;
		else if(str[i]>=97 && str[i]<=122)
			str[i]-=32;
	}
	puts(str);
}
