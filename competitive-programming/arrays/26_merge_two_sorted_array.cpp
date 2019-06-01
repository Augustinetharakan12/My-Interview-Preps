#include <bits/stdc++.h>

using namespace std;

int main() {
	int arr1[1000000], arr2[1000000], arr1_size, arr2_size, t, temp, i, arr1_i, arr2_i;

	cin >> t;

	while(t > 0) {
		cin >> arr1_size;
		cin >> arr2_size;

		for(i=0; i<arr1_size; i++)
			cin >> arr1[i];
		for(i=0; i<arr2_size; i++)
			cin >> arr2[i];

		for(arr2_i=0; arr2_i<arr2_size; arr2_i++) {
			arr1_i = 0;

			if(arr2[arr2_i] > arr1[0]) {
				temp = arr2[arr2_i];
				arr2[arr2_i] = arr1[0];
				arr1_i = 1;
				while(arr1_i < arr1_size && arr1[arr1_i] < temp) {
					arr1[arr1_i-1] = arr1[arr1_i];
					arr1_i++;
				}
				arr1[arr1_i-1] = temp;
			}

		}
		for(i=0; i<arr1_size; i++)
			arr2[arr2_size+i] = arr1[i];

		for(i=0; i<arr1_size + arr2_size; i++)
			cout << arr2[i] << " ";

		cout << "\n";
		t--;
	}
}

