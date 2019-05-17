#include<bits/stdc++.h>

using namespace std;

int main() {

	int limit, arr[100], i, front, half, end, loc;

	cout << "Enter the limit";
	cin >> limit;
	cout << "Enter "<<limit<<" numbers";

	// Input the elements
	for(i=0; i<limit; i++) {
		cin >> arr[i];
	}

	//Method 1 - O(n)

	for(i=1; i<=limit; i++) {
		if(i != arr[i - 1]) {
			cout << "The number is" << i;
			break;
		}
	}

	//Method 2 - O(log(n)) - Algorithm similar to binary search

	front = 0;
	end = limit-1;
	half = (end - front)/2;
	loc = half;
	while(front < end-1) {
		if(loc+1 == arr[loc]) {
			front = front + half;
			half = (end-front)/2;
		}
		else {
			end = end - half;
			half = (end - front)/2;
		}
		loc = front + half;
	}
	cout << "The number is " << "\n" << loc+2;
}
