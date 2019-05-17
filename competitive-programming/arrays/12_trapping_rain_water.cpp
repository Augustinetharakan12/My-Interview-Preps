#include<bits/stdc++.h>

using namespace std;

int main() {
	int limit, arr[100], vol[100], i, front, flag, end, small, volume;

	cout << "Enter the length";
	cin >> limit;

	cout << "Enter " << limit << " numbers";
	for(i=0; i<limit; i++)
		cin >> arr[i];

	front = 0;
	end = limit - 1;

	flag = 1;
	small = arr[end];
	if(arr[front] < arr[end]) {
		flag = 0;
		small = arr[front];
	}

	while(front < end) {
		// cout << "\n" << front << " " << end << " " << small;
		if(flag == 0) {
			front ++;
			if(arr[front] > arr[end]) {
				small = arr[end];
				flag = 1;
			}
			else if(arr[front] > small) {
				small = arr[front];
				vol[front] = 0;
			}
			else {
				vol[front] = small - arr[front];
				volume += vol[front];
			}
		}
		else {
			end --;
			if(arr[end] > arr[front]) {
				small = arr[front];
				flag = 0;
			}
			else if(arr[end] > small) {
				small = arr[front];
				vol[end] = 0;
			}
			else {
				vol[end] = small - arr[end];
				volume += vol[end];
			}
		}
	}

	for(i=0; i<limit; i++)
		cout << "\n" << vol[i];
	cout << " \nTotal Volume = " << volume;
}
