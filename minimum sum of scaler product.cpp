#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr1[20],arr2[20],i,sum=0,n;
	cout<<"enter size of array 1 and array 2\n";
	cin>>n;
	cout<<"enter 1st array elements";
	for(i=0;i<n;i++)
		cin>>arr1[i];
	cout<<"\nenter 2nd array elements";
	for(i=0;i<n;i++)
		cin>>arr2[i];
	sort(arr1,arr1+n);
	sort(arr2,arr2+n,greater<int>());
	for(i=0;i<n;i++)
		sum+=arr1[i]*arr2[i];
	cout<<"\n Minimum sum is "<<sum;
}
