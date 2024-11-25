#include <iostream>
using namespace std;
void merging(int arr1[], int size1, int arr2[], int size2);
int main()
{
	int size1=1000;
	int arr1[size1];
	for(int i=0; i<2; i++)
	{
		cout<<"Enter the value in array 1: ";
		cin>>arr1[i];
	}
	
	int size2;
	cout<<"Enter size of array 2: ";
	cin>>size2;
	
	int arr2[size2];
	for(int i=0; i<size2; i++)
	{
		cout<<"Enter the size of array 2: ";
		cin>>arr2[i];
	}
	merging(arr1, size1, arr2, size2);
	return 0;	
}
void merging(int arr1[], int size1, int arr2[], int size2)
{
	int temp = arr1[1];
	for(int i=1; i<size2 + 1; i++ )
	{
		arr1[i] = arr2[i-1];
	}
	arr1[size2+1] = temp;
	for( int i=0; i<size2 + 2; i++ )
	{
		cout<<arr1[i]<<", ";
	}
}