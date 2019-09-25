#include<stdio.h>
#include<ctype.h>
int main(){
	char i='9';
	if(isdigit(i))
		printf("digit");
	else
		printf("not digit");
	return 0;
}
