#include <bits/stdc++.h>

using namespace std;

int hash_nut_bolt[150];

int main() {
	int t, i, N, k;
	char nuts[10], bolts[10], order[] = "!#$%&*@^~";

	cin >> t;

	while(t--) {
	    cin >> N;
		for(i=0; i<N; i++)
			cin >> nuts[i];

		for(i=0; i<N; i++)
			cin >> bolts[i];

		for(i=0; i<N; i++)
			hash_nut_bolt[int(nuts[i])] = 1;

		for(i=0; i<N; i++)
			hash_nut_bolt[int(bolts[i])] = hash_nut_bolt[int(bolts[i])] == 1 ? 2:0;

	        for(i=0; order[i]!='\0'; i++) {
			if(hash_nut_bolt[int(order[i])] == 2) cout << order[i] << " ";
		}
		cout << "\n";

		for(i=0; order[i]!='\0'; i++) {
			if(hash_nut_bolt[int(order[i])] == 2) cout << order[i] << " ";
				hash_nut_bolt[int(order[i])] = 0;
		}
		cout << "\n";
	}
}

