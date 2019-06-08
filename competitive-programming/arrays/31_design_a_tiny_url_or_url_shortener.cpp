#include <iostream>
using namespace std;

int main() {

    char arr_62[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char tiny_url[1000000];
    int id, t, i, j, dup_id;

    cin >> t;

    while(t--) {
        cin >> id;

        dup_id = id;

        i = 0;
        while(dup_id > 0) {
            tiny_url[i++] = arr_62[dup_id%62];
            dup_id = int(dup_id / 62);
        }
        for(j=i-1; j>=0; j-- )
            cout << tiny_url[j];
        if(i) cout << "\n" << id << "\n";
    }
	//code
	return 0;
}
