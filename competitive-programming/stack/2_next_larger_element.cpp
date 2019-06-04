#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, arr[100], arr_size, i, j;
	bool flag;

	cin >> t;

	while(t--) {
		cin >> arr_size;

		for(i=0; i<arr_size; i++)
			cin >> arr[i];

		for(i=0; i<arr_size; i++) {
			j = i+1;
			flag = 0;
			while(j < arr_size) {
				if(arr[j] > arr[i]) {flag=1; break;}
				j++;
			}
			if(flag == 0) cout << "-1";
			else cout << arr[j];
			cout << " ";
		}
		cout << "\n";
	}
}
