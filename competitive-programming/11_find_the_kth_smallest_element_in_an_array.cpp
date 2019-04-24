#include<bits/stdc++.h>

using namespace std;

int main() {
	int arr[100], i, j, arr2[100], k, flag, temp, limit;

	cout << "Enter the size of the array";
	cin >> limit;

	cout << "Enter value of k";
	cin >> k;

	cout << "Enter " << limit << " elements";
	for(i=0; i<limit; i++)
		cin >> arr[i];

	for(i=0; i<k ;i++) {
		for(j=i+1; j<k; j++)
			if(arr[j]<arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

				arr2[i] = arr[i];
				arr2[j] = arr[j];
			}
	}

	for(i=k; i<limit; i++) {
		j = k-1;
		flag = 0;
		while(arr2[j] > arr[i] && j>=0) {
			arr2[j+1] = arr2[j];
			j--;
			flag = 1;
		}
		if(flag == 1)
			arr2[j] = arr[i];
	}

	cout << arr2[k-1];
}
