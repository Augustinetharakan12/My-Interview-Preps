#include <bits/stdc++.h>

using namespace std;

int main() {
	char  stack[100], arr[100], var;
	int top = 0, i;
	bool flag = 0;

	cout << "Enter the expression";
	cin >> arr;

	for(i=0; i<strlen(arr); i++) {
		switch(arr[i]) {
			case '(' : var = ')'; break;
			case '[' : var = ']'; break;
			case '{' : var = '}'; break;
			default : var = ' ';
		}

		if(var != ' ')
			stack[top++] = var;

		else {
			if(top < 0 or stack[--top] != arr[i]) {
				flag = 1;
				break;
			}
		}
	}

	if(flag == 1 or top > 0)
		cout << "Not balanced";
	else
		cout << "Balanced";

}
