#include <bits/stdc++.h>
using namespace std;


void DNFSort(int A[], int n)
{
	int lo = 0, mid = 0, hi = n-1;

	while(mid <= hi)
	{
		if(A[mid] == 0){
			swap(A[mid++], A[lo++]);
		}
		else if(A[mid] == 2){
			swap(A[mid], A[hi--]);
		}
		else{
			mid++;
		}
	}

}
int main()
{
	int arr[] = {1, 1, 0, 0, 1, 1, 0, 0, 2, 2, 2, 2, 0, 1, 0, 2};

	int n = sizeof(arr)/sizeof(arr[0]);

	DNFSort(arr, n); // 0,1,2 sorting algorithm

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

}