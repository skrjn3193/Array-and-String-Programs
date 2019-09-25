#include<iostream>
using namespace std;
int main(){
	int a[20],small,large,n,i;
	cout<<"enter no of elements";
	cin>>n;
	cout<<"enter elements in array";
	for(i=0;i<n;i++)
		cin>>a[i];
	large=small=a[0];
	for(i=1;i<n;i++){
		if(a[i]>large)
			large=a[i];
		if(a[i]<small)
			small=a[i];
	}
	cout<<"\n Smallest element is"<<small;
	cout<<"\n Largest element is"<<large;
}
