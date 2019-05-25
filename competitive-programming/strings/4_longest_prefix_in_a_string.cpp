#include <bits/stdc++.h>

using namespace std;

int main() {
	char strings[1000][1000], longest_prefix[100], current_char;
	int num_strings, t, i, j;
	bool flag;

	cin >> t;

	while(t>0) {

		// cout << "Enter the number of strings ";
		cin >> num_strings;
		for(i=0; i<num_strings;i++)
			cin >> strings[i];

		j=0;
		flag = 0;

		while(1) {
			current_char = strings[0][j];
			for(i=0; i<num_strings; i++) {
				if(strings[i][j] == '\0' || strings[i][j] != current_char) {
					flag = 1;
					if(j==0) {
						longest_prefix[j++] = '-';
						longest_prefix[j++] = '1';
					}
					break;
				}
			}
			if (flag == 1)
				break;
			else {
				longest_prefix[j++] = current_char;
			}
		}

		longest_prefix[j] = '\0';

		cout << longest_prefix << "\n";

		t--;
	}
}
