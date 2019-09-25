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
		int flag=0;
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j] && i!=j)
				flag=1;
		}
			if(flag==1)
					cout<<"\nRepetive elements are "<<arr[i];
	}
	return 0;
	}
