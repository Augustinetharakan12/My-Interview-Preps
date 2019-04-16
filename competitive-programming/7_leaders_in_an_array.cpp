#include<bits/stdc++.h>

using namespace std;

int main() {
	int limit, arr[100], i, max, j=0, leaders[100];

	cout << "Enter the limit of the array";
	cin >> limit;

	for(i=0; i<limit; i++)
		cin>> arr[i];

	max = arr[limit-1];
	leaders[j++] = max;

	for(i=limit-2; i>=0; i--){
		if(arr[i] > max){
			max = arr[i];
			leaders[j++] = max;
		}
	}

	for(i=0; i<j; i++)
		cout << " " << leaders[i];
}
