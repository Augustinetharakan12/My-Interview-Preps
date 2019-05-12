#include <iostream>

using namespace std;

int hash_count[150]; // Declaring this here to initialize it with 0 and setting size to 150 because input value ranges from 0 to 150

int main () {
	int arr_size, arr[100], i, j, arr_index, pos_largest_count;

	cout << "Enter the size of the array";
	cin >> arr_size;

	cout << "Enter the elements of the array";
	for(i=0; i<arr_size; i++) {
		cin >> arr[i];
		hash_count[arr[i]] += 1;
	}

	arr_index = 0;

	for(i=0; i<150; i++) {

		pos_largest_count = i;

		if(hash_count[i] != 0) {
			for(j=i+1; j<150; j++)
				if(hash_count[j] > hash_count[pos_largest_count]) {
					pos_largest_count = j;
			}
		}

		while(hash_count[pos_largest_count] > 0) {
			arr[arr_index++] = pos_largest_count;
			hash_count[pos_largest_count]--;
		}
	}

	for(i=0; i<arr_index; i++)
		cout << " " << arr[i];
}
