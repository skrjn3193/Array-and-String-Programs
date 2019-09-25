#include<stdio.h>
int main(){
	char arr[]={'S','H','i','K','h','e','r'},skr;
	int i=0,j=0,x=0;
	for(i=0;x<7;i++){
		if(arr[i]>=65 && arr[i]<=90){
			skr=arr[i];
			for(j=i;j<7;j++){
				arr[j]=arr[j+1];
			}
			arr[j-1]=skr;
			i=-1;
			x++;
			
		}
	}
	for(i=0;i<7;i++)
	printf("%c",arr[i]);
}
