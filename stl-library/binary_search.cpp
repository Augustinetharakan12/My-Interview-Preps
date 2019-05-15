#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int i, arr[100], arr_size, search_element;

	cout << "Enter the size of the array";
	cin >> arr_size;

	cout << "Enter the elements of the array";
	for(i=0; i<arr_size; i++)
		cin >> arr[i];

	sort(arr, arr+arr_size);

	cout << "Enter the number to be searched";
	cin >> search_element;

	if(binary_search(arr, arr+arr_size, search_element))
		cout << "Number found in the array";
	else
		cout << "Number not found in the array";
}
