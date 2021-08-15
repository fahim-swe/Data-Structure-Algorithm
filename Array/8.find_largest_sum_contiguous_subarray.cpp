#include <bits/stdc++.h>
using namespace std;


int KadaneAlgorithm(int A[], int n)
{
	int current_best = A[0];
	int overall_best = A[0];

	for(int i = 1; i < n; i++){
		current_best += A[i];
		if(current_best < A[i]){
			current_best = A[i];
		}

		if(current_best > overall_best){
			overall_best = current_best;
		}
	}

	return overall_best;
}
int main()
{
	int arr[] = {1, 2, 3, -2, 5};

	int n = sizeof(arr)/sizeof(arr[0]);

	cout << KadaneAlgorithm(arr, n) << endl;
}