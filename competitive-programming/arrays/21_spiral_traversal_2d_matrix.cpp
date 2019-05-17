#include <iostream>

using namespace std;

#define PRINT cout << " " << arr[i][j];

int main() {
	int arr[100][100], m, n, i, j, offset;

	cout << "Enter the number of columns and rows";
	cin >> m;
	cin >> n;

	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			cin >> arr[i][j];

	offset = 0;
	while(offset < m) {

		for(i=offset, j=offset; j<n-offset ;j++)
			PRINT

		for(j--, i++; i<m-offset ;i++)
			PRINT

		for(i--, j--; j>=offset; j--)
			PRINT

		for(j++, i--; i>offset; i--)
			PRINT

		offset++;
	}
}
