#include <iostream>
using namespace std;
int main()
	{
	int n,i,j=0;
	cout << "\nEnter the number of elements : ";
	cin >> n;
	int arr[n],temp[n];
	cout << "\nInput the array elements in sorted order: ";
	for(i = 0; i < n; i++)
	{
	cin >> arr[i];
	}
	for(i=0;i<n;i++){
		if(arr[i]!=arr[i+1]){
			temp[j]=arr[i];
			j++;
		}
	}
	for(i=0;i<j;i++)
	cout<<"\n"<<temp[i];
}
	
