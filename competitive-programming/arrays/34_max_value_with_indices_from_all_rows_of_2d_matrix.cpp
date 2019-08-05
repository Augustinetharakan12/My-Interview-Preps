#include <bits/stdc++.h>

using namespace std;

int main() {
	int m, n, i, j, arr[100][100], max_value, count;

	cout << "Enter the number of rows: ";
	cin >> m;

	cout << "Enter the number of columns: ";
	cin >> n;

	cout << "Enter all the elemtns";
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			cin >> arr[i][j];

	for(i=0; i<m; i++) {
		max_value = arr[i][0];
		count = 1;
		for(j=1; j<n; j++) {
			if(arr[i][j] > max_value) {
				max_value = arr[i][j];
				count = 1;
			}
			else if(arr[i][j] == max_value) count ++;
		}
		cout << count << "  times " << max_value << "\n";
	}
}
