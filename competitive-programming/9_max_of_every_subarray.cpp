#include<bits/stdc++.h>

using namespace std;

int binary_search_return_position(int arr[], int num, int sub_arr_length) {
	int front = 0, end = sub_arr_length - 1, middle;

	middle = (end-front)/2;

	while(front < end) {
		if(arr[middle] == num)
			break;
		if(arr[middle] > num)
			end = middle-1;
		else
			front = middle+1;
		middle = (end-front)/2;
	}
	return middle;
}

int main() {
	int limit, t, sort_arr[100], arr[100], i, j, pos, num, front, end, sub_arr_length, temp, top, sa, k;
	cout << " Enter the nuber of test cases";
	cin >> t;
	while(t>0) {
		cout << "Enter the size of the array";
		cin >> limit;

		cout << "Enter the size of the sub array";
		cin >> sub_arr_length;

		for(i=0; i<limit; i++)
			cin >> arr[i];

		top = 0;
		for(i=0; i<sub_arr_length; i++) {
			sa = top;
			while(sa > 0) {
				if(sort_arr[sa] < arr[i] || sa == 0)
					break;
				else {
					sort_arr[sa+1] = sort_arr[sa];
					sa --;
				}
			}
			sort_arr[sa] = arr[i];
			top ++;
		}

		cout << "\n" << sort_arr[sub_arr_length-1];

		// Taking the next set of k elements to find the largest number
		for(i=sub_arr_length; i<limit; i++) {
			num = arr[i - sub_arr_length];

			// Doing binary search to find the element (arr[i-1]) in the sorted array
			pos = binary_search_return_position(sort_arr, num, sub_arr_length);

			for(k=pos; k<sub_arr_length-1; k++)
				sort_arr[k] = sort_arr[k+1];

			// Inserting the new element to the end of the sort_arr
			sort_arr[sub_arr_length-1] = arr[i];

			j = sub_arr_length-1;
			while(j>1) {
				if(sort_arr[j] < sort_arr[j-1]) {
					temp = sort_arr[j];
					sort_arr[j] = sort_arr[j-1];
					sort_arr[j-1] = temp;
					j--;
				}
				else break;
			}
			cout << " " << sort_arr[sub_arr_length-1];
		}
		t--;
	}
}
