#include <bits/stdc++.h>

using namespace std;

int main() {
	char str[100], stack[100], reversed_string[100];
	int top=0, i, rev_string_index = 0;
	int t;

	cin >> t;

	while(t>0) {
		//cout << "Enter the string";
		cin >> str;

		for(i=strlen(str)-1; i>=-1; i--){
			if( str[i] == '.'  || i == -1 ) {
				while(top > 0) {
					reversed_string[rev_string_index++] = stack[--top];
				}
				if(i != -1)
					reversed_string[rev_string_index++] = '.';

			}
			else
				stack[top++] = str[i];
		}
		reversed_string[rev_string_index] = '\0';

		cout << reversed_string;
	}
}
