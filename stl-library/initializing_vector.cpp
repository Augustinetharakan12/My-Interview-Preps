/*#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
*/
#include <bits/stdc++.h>
using namespace std;

void display(vector<int> vect, int vect_size) {
	int i;
	for(i=0; i<vect_size; i++)
		cout << " " << vect[i];
}

int main() {
	int arr[] = {1, 2, 3, 4};

	int arr_size = sizeof(arr)/sizeof(arr[0]), i;

	vector<int> vect(arr, arr+arr_size);

	cout << "\nThe vector is ";
	display(vect, arr_size);

	// To sort
	sort(vect.begin(), vect.end());
	cout << "\nThe vector after sorting is ";
	display(vect, arr_size);

	// To reverse
	reverse(vect.begin(), vect.end());
	cout << "\nThe vector after reversing is ";
	display(vect, arr_size);

	// To find the minimum element
	cout << "\nThe min element is " << *min_element(vect.begin(), vect.end());

	// To find the maximum element
	cout << "\nThe max element is " << *max_element(vect.begin(), vect.end());

	// To find the sum
	cout << "\nThe sum of the elements in the vector is "<< accumulate(vect.begin(), vect.end(), 0);
}
