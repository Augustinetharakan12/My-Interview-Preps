#include <iostream>

using namespace std;

int main() {
	int size, arr[100], i, j, k, num;

	cout << "Enter the size of the array";
	cin >> size;

	cout << "Enter the value of k";
	cin >> k;

	for(i=0; i<size; i++) {
		cin >> num;

		if(i >= k) j = k;
		else j = i;

		while(j>0 && arr[j-1] > num) {
			arr[j] = arr[j-1];
			j--;
		}

		arr[j] = num;

		if(i >= k-1) cout << arr[k-1];
		else cout << "-1";
	}
}
