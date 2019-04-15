#include<bits/stdc++.h>

using namespace std;
int main() {
	int limit, arr[100], i, front, end, sum, sub_sum;
	cout << "Enter the size of the array";
	cin >> limit;
	cout << "Enter "<< limit << " numbers";
	for(i=0; i<limit; i++)
		cin >> arr[i];
	cout << "Enter the sum of the subarray";
	cin >> sub_sum;

	front = 0;
	end = 0;
	sum = 0;
	i = 0;
	while(i < limit-1) {
		sum = sum+arr[i];
		end = i;

		while(sum > sub_sum && front < i) {
			sum = sum - arr[front];
			front += 1;
		}

		if ( sum == sub_sum)
			break;
		i++;
	}
	cout << "Start index: " << front << " End index " << end;
}
