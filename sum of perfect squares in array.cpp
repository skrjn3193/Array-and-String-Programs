#include<iostream>
#include<math.h>
using namespace std;
int isPerfectSquare(int number){
	int ivar;
	float fvar;
	fvar=sqrt((double)number);
	ivar=fvar;
	
	if(ivar==fvar)
		return number;
	else
		return 0;
}
int main()
{
int n;
cout<<"enter no of elements";
cin >> n;
int arr[n];
int i;
cout<<"enter array elements";
for(i = 0; i < n; i++)
{
cin >> arr[i];
}
int sum = 0;
for(i = 0; i < n; i++)
{
sum = sum + isPerfectSquare(arr[i]);
}
cout <<"\nsum of perfect squares is "<<sum;
return 0;
}

