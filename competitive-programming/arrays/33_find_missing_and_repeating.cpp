#include <bits/stdc++.h>

using namespace std;

int hash_array[1000000];

int main() {
	int t, arr[1000000], i, repeating_number, arr_size;

	long missing, sum;

	cin >> t;

	while(t--) {

		sum = 0;

		cin >> arr_size;

		for(i=0; i<arr_size; i++)
			cin >> arr[i];

		for(i=0; i<arr_size; i++) {
			if(hash_array[arr[i]] == 0) {
				hash_array[arr[i]] = 1;
				sum += arr[i];
			}
			else repeating_number = arr[i];
		}

		for(i=0; i<arr_size; i++)
			hash_array[arr[i]] = 0;

		missing = arr_size * (arr_size+1)/2 - sum;

		cout << repeating_number << " " << missing << "\n";
	}
}
