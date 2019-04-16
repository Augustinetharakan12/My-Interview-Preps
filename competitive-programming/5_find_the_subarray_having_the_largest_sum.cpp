#include<bits/stdc++.h>

using namespace std;

int main() {
	int limit, arr[100], max, max_end, max_front, front, end, sum, i;

	cout << "Enter the limit of the array";
	cin >> limit;

	cout << "Enter "<< limit << "numbers";
	for(i=0; i<limit; i++)
		cin >> arr[i];

	max = 0;
	max_end = 0;
	max_front = 0;
	front = 0;
	end = 0;
	sum = 0;

	for(i=0; i<limit; i++) {
		end = i;
		sum += arr[end];
		if(sum < 0) {
			front = i+1;
			end = i+1;
			sum = 0;
		}
		if(sum > max) {
			max = sum;
			max_end = end;
			max_front = front;
		}
	}

	cout << "Maximum sum: " << max << " front " << max_front << "end " << max_end;
}
