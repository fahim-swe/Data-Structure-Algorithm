
#include <bits/stdc++.h>
using namespace std;



// negative numbers to beginning and positive to end with constant extra space
void move_negative_to_beg(int A[], int n)
{
	int i = 0, j = n-1;

	while(i < j){
		// looking for number with positive index
		while(A[i] < 0){
			i++;
		}

		// looking for number with negative index
		while(A[j] > 0){
			j--;
		}

		// found number A[i] with positive value
		// found number A[j] with negative value
		swap(A[i++], A[j--]);
	} 
}
int main()
{
	int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 6};

	int n = sizeof(arr)/sizeof(arr[0]);

	move_negative_to_beg(arr, n);

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout <<endl;
}