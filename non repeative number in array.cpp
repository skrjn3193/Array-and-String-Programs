#include <iostream>
using namespace std;
int main()
	{
	int n,i,j;
	cout << "\nEnter the number of elements : ";
	cin >> n;
	int arr[n];
	cout << "\nInput the array elements : ";
	for(i = 0; i < n; i++)
	{
	cin >> arr[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i]==arr[j] && i!=j)
				break;
		}
			if(j==n)
					cout<<"\nNon repetive numbers are "<<arr[i];
	}
	return 0;
	}
