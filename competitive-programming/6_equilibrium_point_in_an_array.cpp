#include<bits/stdc++.h>

using namespace std;

int main() {
	int limit, arr[100], i, s_l, s_r, l, r;
	cout << "Enter the limit of the array";
	cin >> limit;
	for(i=0; i<limit; i++)
		cin>>arr[i];
	s_l = arr[0];
	s_r = arr[limit-1];
	l = 0;
	r = limit -1;
	while(l < r) {
		if(s_l < s_r)
			s_l = s_l + arr[l++];
		else
			s_r = s_r + arr[r--];
	}
	cout << "Equilibrium point is " << l;
}
