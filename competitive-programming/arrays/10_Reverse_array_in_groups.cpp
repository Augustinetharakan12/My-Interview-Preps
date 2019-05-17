#include<bits/stdc++.h>

using namespace std;

int main() {
	int arr[100], i, j, limit, group_size, temp;

	cout << "Enter the size of the array";
	cin >> limit;

	cout << "Enter the size of the group";
	cin >> group_size;

	cout << "Enter " << limit << " number";
	for(i=0; i<limit; i++)
		cin >> arr[i];

	for(i=0; i<limit; i+=group_size) {
		if(i+group_size > limit)
			group_size = limit - i;
		for(j=0; j<group_size/2; j++){
			temp = arr[i+j];
			arr[i+j] = arr[i+group_size-j-1];
			arr[i+group_size-j-1] = temp;
		}
	}

	for(i=0; i<limit; i++)
		cout << " " << arr[i];
}
