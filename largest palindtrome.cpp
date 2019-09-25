#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int largePalindtrome(int n){
int rev=0,temp,r;
temp=n;	
while(n>0){
	r=n%10;
	rev=rev*10+r;
	n=n/10;
	}
	if(rev==temp)
		return 1;
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
sort(arr,arr+n);
for(i=n-1;i>0;i--){
	if(largePalindtrome(arr[i]))
	{
	cout<<arr[i];
	break;
	}	
}
}

