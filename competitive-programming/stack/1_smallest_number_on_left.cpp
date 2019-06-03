#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, arr[100], small_i, i, arr_size;
	bool flag;

	cin >> t;

	while(t--) {
		cin >> arr_size;

		for(i=0; i<arr_size; i++)
			cin >> arr[i];

		for(i=0; i<arr_size; i++) {
			flag = 0;
			small_i = i-1;
			while(small_i >= 0) {
				if(arr[small_i] < arr[i]) {flag=1; break;}
				small_i--;
			}
			if(flag == 0) cout << "-1";
			else cout << arr[small_i];
			cout << " ";
		}
		cout << "\n";
	}
}
