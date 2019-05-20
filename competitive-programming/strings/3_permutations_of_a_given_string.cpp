#include <bits/stdc++.h>

using namespace std;

void swap(char *str1, char *str2) {
	char temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void permute(char *str, int l, int r) {
	int i;

	if(l == r)
		cout << str << endl;
	else
		for(i=l; i<r; i++) {
			swap(str+l, str+i);
			permute(str, l+1, r);
			swap(str+l, str+i);
		}
}
int main() {
	char str[100];

	cout << "Enter the string";
	cin >> str;

	permute(str, 0, strlen(str));
}
