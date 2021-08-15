#include <bits/stdc++.h>
using namespace std;



// using priority queue, Heap technique, create heap O(n),   
// finding kth min k*log(n)


int kthSmallest(int A[], int n, int k)
{

	// create a min heap
	priority_queue<int, vector<int>, greater<int> > pq;

	// O(n)
	for(int i = 0; i < n; i++){
		pq.push(A[i]);
	}

	int ans;
	int i = 1;


	
	// O(k*log(n))
	while(!pq.empty())
	{
		if(i==k){
			ans = pq.top();
			break;
		}
		i++;
		pq.pop(); // O(log*n)
	}

	return ans;


}

void merge_array(int A[], int left, int mid, int right)
{
	int i = left, j = mid+1;

	int tem_idx = 0;
	int tem[right-left+1];
	while( i <= mid && j <= right)
	{
		if(A[i] <= A[j]){
			tem[tem_idx++] = A[i++];
		}
		else{
			tem[tem_idx++] = A[j++];
		}
	}

	while(i <= mid){
		tem[tem_idx++] = A[i++];
	}

	while(j <= right){
		tem[tem_idx++] = A[j++];
	}

	int si = sizeof(tem)/sizeof(tem[0]);

	for(int i = 0; i < si; i++){
		A[left++] = tem[i];
	}
}

// method 1: sort the hole array in accending order and return the k-1 index
void margeSort(int A[], int left, int right)
{
	if(left < right){
		int mid = (left+right)/2;

		margeSort(A, left, mid);
		margeSort(A, mid+1, right);

		merge_array(A, left, mid, right);
	}
}



int main()
{
	int arr[] = {10, 5, 6, 12, 6, 19};

	int n = sizeof(arr)/sizeof(arr[0]);

	int k = 3;

	

	// using heap technique: O(n) + O(k*log(n))
	cout << kthSmallest(arr, n, k) << endl;

	// sorting technique: O(n*log(n))
	margeSort(arr, 0, n-1);
	cout << arr[k-1] << endl;

}