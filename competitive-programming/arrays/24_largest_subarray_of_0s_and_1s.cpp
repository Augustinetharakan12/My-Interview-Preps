#include <iostream>

using namespace std;

int main () {
	int arr[100], arr_len;

	cout << "Enter the length of the array";
	cin >> arr_len;

	cout << "Enter the elements of the array";
	for(i=0; i<arr_len; i++) {
		cin >> arr[i];
		arr[i] = arr[i] == 0 ? -1:1;
		total_sum = total_sum + arr[i];
	}

	head = 0;
	tail = arr_len - 1;

	current_sum = total_sum;
	max_head = head;
	max_tail = tail;

	while(head < tail) {

		if(current_sum == 0){
			max_head = head;
			max_tail = tail;
			flag = 1;
			break;
		}
		else if(current_sum < 0) {
			temp_head = head;
			temp_tail = tail;
			offset = 0;
			if(arr[temp_head] < arr[temp_tail]) {
				
			}

			else if(arr[temp_head] > arr[temp_tail]) {

			}

			else
				while(temp_head + offset < temp_tail - offset) {
					if(arr[temp_head+offset]
				}
		}

	}

}
