#include<stdio.h>
int main(){
	char str[30],cmp[30],c;
	int i,n=0,len=0,len_cmp=0,flag=0;
	printf("\n Enter your first string");
	gets(str);
	printf("\n Enter your second string");
	gets(cmp);
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	for(i=0;cmp[i]!='\0';i++){
		len_cmp++;
	}
	if(len==len_cmp){
		for(i=0;str[i]!='\0';i++){
			if(str[i]==cmp[i])
				flag=0;
				else 
					flag=1;
		}
		if(flag==0)
			printf("\n Your string is equal ");
		else if(flag==1)
			printf("\n String is not equal");
	}
	else
		printf("\n please make sure you gave equal length string");	
}
