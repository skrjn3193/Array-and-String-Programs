#include<stdio.h>
int main(){
	char str[30];
	int i,j,word=0,x=0,max=0;
	int count;
	printf("\n Enter string \n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		
		if(str[i]==' ')
		{
			//printf(" \n space is before  %c \n",str[i+1]);
			word++;
			count=0;	
			for(j=x;j<i;j++)
			{
			    count=count+1;
				x=j+2;
				if(count>=max)
					max=count;
				
				//printf("\n %d",count);
			}
	    }
	    
	}
	if(str[i]=='\0')
	{
		    word++;
	    	count=0;	
			for(j=x;j<i;j++)
			{
			    count=count+1;
				
				if(count>=max)
					max=count;
				
				//printf("\n %d",count);
			}
    }
	
	printf("\n\n\n\nThere are %d words ",word);
	printf("\n Biggest word have %d characters",max);
	
    }   
