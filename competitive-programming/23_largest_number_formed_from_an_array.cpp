#include <iostream>
#include <algorithm>

using namespace std;

int main (){
	int limit, i, j;
	char string[100][100];

	cout << "Enter the number of strings";
	cin >> limit;

	cout << "Enter the strings followed by space";
	for(i=0; i<limit; i++)
		cin >> string[i];

	for(i=0; i<limit; i++)
		cout << "\n" << string[i];
}
