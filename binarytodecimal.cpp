#include<stdio.h>
#include<math.h>
int main(){
	long long binary, decimal=0, tempbinary;
	int i, base=2, n=0;
	printf("Enter Binary string ton convert it to decimal");
	scanf("%lld",&binary);
	tempbinary=binary;
	while(tempbinary!=0){
		int num=tempbinary%10;
		if(num==1){
			decimal+=pow(base,n);
		}
		n++;
		tempbinary/=10;
	}
	printf("\n Decimal of %lld is %lld",binary,decimal);
}
