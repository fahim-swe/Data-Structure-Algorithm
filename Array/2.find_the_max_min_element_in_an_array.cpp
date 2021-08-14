#include<bits/stdc++.h>
using namespace std;


pair<int,int> find_max_min(int arr[], int n)
{
	int mx = arr[0];
	int mn = arr[0];

	for(int i = 1; i < n; i++){
		mx = max(mx, arr[i]);
		mn = min(mn, arr[i]);
	}

	return {mx, mn};
}
int main()
{
	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};

	int n = sizeof(arr)/sizeof(arr[0]);

	pair<int,int> ans = find_max_min(arr, n);

	cout << "Max element : " << ans.first << endl;
	cout << "Min element : " << ans.second << endl;
}