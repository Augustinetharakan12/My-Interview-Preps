#include <bits/stdc++.h>

using namespace std;

int main() {
	int arr_size, arr[100], i, j, max_continuous, temp, continuous;

	cout << "Enter the size of the array";
	cin >> arr_size;

	cout << "Enter " << arr_size << " numbers";
	for(i=0; i<arr_size; i++)
		cin >> arr[i];

	for(i=0; i<arr_size-1; i++)
		for(j=i+1; j<arr_size; j++) {
			if(arr[j] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

	continuous = 1;
	max_continuous = 1;

	for(i=1; i<arr_size; i++) {
		if(arr[i] - arr[i-1] == 0)
			continue;
		if(arr[i] - arr[i-1] == 1)
			continuous ++;
		else {
			if(continuous > max_continuous)
				max_continuous = continuous;
			continuous = 1;
		}
	}
	if(continuous > max_continuous)
		max_continuous = continuous;

	cout << max_continuous;
}
