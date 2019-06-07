#include <bits/stdc++.h>

using namespace std;

int main() {
	int i, arr_size, arr[100], dup_arr[100], hash[100], t;

	cin >> t;

	while(t--) {
		cin >> arr_size;

		for(i=0; i<arr_size; i++) {
			cin >> arr[i];
			dup_arr[i] = arr[i];
		}

		sort(dup_arr, dup_arr + arr_size);

		for(i=0; i<arr_size; i++)
			hash[dup_arr[i]] = i;

		for(i=0; i<arr_size; i++)
			cout << hash[arr[i]] << " ";

		cout << "\n";
	}
}
