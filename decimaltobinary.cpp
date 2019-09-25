#include<stdio.h>
#include<math.h>
int main(){
	long long decimal,binary,tempdecimal;
	int i,place=1,rem;
	binary=0;
	printf("Enter Decimal number to convert it to Binary string");
	scanf("%lld",&decimal);
	tempdecimal=decimal;
	while(tempdecimal>0){
		rem=tempdecimal%2;
		binary+=rem*place;
		place*=10;
		tempdecimal/=2;
	}
	printf("\n Decimal number=%lld",decimal);
	printf("\n Binary number=%lld",binary);
}
