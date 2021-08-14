#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n)
{
	int i = 0, j = n-1;

	while(i < j){
		swap(arr[i++], arr[j--]);
	}
}

void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++){
		cout<< arr[i] << " ";
	}

	cout << endl;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	

	int n = sizeof(arr)/sizeof(arr[0]);

	printArray(arr, n);

	reverseArray(arr, n);

	printArray(arr, n);

}