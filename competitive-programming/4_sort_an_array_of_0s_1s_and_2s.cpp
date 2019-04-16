#include<bits/stdc++.h>

using namespace std;

int main() {
	int limit, arr[100], i, count_0=0, count_1=0, temp;

	cout << "Enter the limit";
	cin >> limit;

	cout << "Enter " << limit <<" numbers";
	for(i=0; i<limit; i++){
		cin >> arr[i];
		if(arr[i] == 0)
			count_0++;
		else if(arr[i] == 1)
			count_1++;
	}

	cout << " Sorted array is";
	for(i=0; i<limit; i++) {
		if(i<count_0)
			temp = 0;
		else if(i<count_0+count_1)
			temp = 1;
		else temp = 2;
		arr[i] = temp;
		cout << " " << temp;
	}
}
