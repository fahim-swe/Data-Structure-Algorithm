#include <bits/stdc++.h>
using namespace std;

void roted_by_one(int A[], int n)
{
	int temp = A[n-1];

	for(int i = n-1; i >= 1; i--){
		A[i] = A[i-1];
	}

	A[0] = temp;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};

	int n = sizeof(arr)/sizeof(arr[0]);

	roted_by_one(arr, n);

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
}