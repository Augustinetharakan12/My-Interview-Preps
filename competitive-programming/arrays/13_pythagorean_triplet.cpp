#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int linear_search(int arr[], int num, int size) {
	int i, flag = 0;

	for(i=0; i<size; i++)
		if(arr[i] == num) {
			flag = 1;
			break;
		}

	return flag;
}

int main() {
	int limit, arr[100], sqr[100], i, j, a2_minus_c2, b, flag = 0, search;

	cout << "Enter the size of the array";
	cin >> limit;

	for(i=0; i<limit; i++) {
		cin >> arr[i];
		sqr[i] = arr[i] * arr[i];
	}

	for(i=0; i<limit-1; i++) {
		for(j=i+1; j<limit; j++) {
			a2_minus_c2 = abs(sqr[i] - sqr[j]); // a^2 = b^2 + c^2
			b = sqrt(a2_minus_c2);
			// cout << "\n" << sqr[i] << " " << sqr[j] << " " << b << " " << a2_minus_c2;

			if(b == int(b)) {
				search = linear_search(sqr, a2_minus_c2, limit);
				if(search == 1) {
					flag = 1;
					break;
				}
			}
		}
	}

	if(flag == 1)
		cout << "It contains a pythagorean triplet";
	else
		cout << "The array does not contain a pythagorean triplet";
}
