#include <bits/stdc++.h>
using namespace std;

vector<int> intersection_of_two_array(int a[], int n1, int b[], int n2)
{
	vector<int> ans;

	for(int i = 0; i < n1; i++){
		for(int j = 0; j < n2; j++){
			if(a[i] == b[j]){
				ans.push_back(a[i]);
				b[j] = -1;
				break;
			}
		}
	}

	return ans;
}

vector<int> union_of_two_array(int a[], int n1 , int b[], int n2)
{
	vector<int> ans;

	for(int i = 0; i < n1; i++){
		ans.push_back(a[i]);

		// mark find element
		for(int j = 0; j < n2; j++){
			if(a[i] == b[i]){
				b[i] = -1;
				break;
			}
		}
	}

	for(int i = 0; i < n2; i++){
		if(b[i] != -1){
			ans.push_back(b[i]);
		}
	}

	sort(ans.begin(), ans.end());

	return ans;
}
int main()
{
     int a[] = {1, 2, 2, 3, 4, 5, 5, 6};
     int b[] = {2, 2, 2, 2, 4, 4, 6};

     int n1 = sizeof(a)/sizeof(a[0]);
     int n2 = sizeof(b)/sizeof(b[0]);


    
     vector<int> ans = union_of_two_array(a, n1, b, n2);

     cout << "Union of two sorted array: ";
     for(int i = 0; i < ans.size(); i++){
     	cout << ans[i] << " ";
     }

     cout <<endl;

     
     vector<int> ans2 = intersection_of_two_array(a, n1, b, n2);

     cout << "Intersection of two sorted array: ";
     for(int i = 0; i < ans2.size(); i++){
     	cout << ans2[i] << " ";
     }
}